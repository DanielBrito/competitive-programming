// JavaScript (Basic) Certification

'use strict';


const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', function(inputStdin) {
  inputString += inputStdin;
});

process.stdin.on('end', function() {
  inputString = inputString.split('\n');
  main();
});

function readLine() {
  return inputString[currentLine++];
}

function throwEmptyName(){
    throw new Error("Name cannot be empty");
}

function throwInvalidState(state){
    throw new Error(`Invalid state ${state}`);
}

function isInvalidState(state){
    return state!=="completed" && state!=="active" && state!=="others";
}

class NotesStore {    
    constructor(){
        this.notes = [];
    }
    
    addNote(state, name){
        if(name===""){
            throwEmptyName();  
        }
        else
        if(isInvalidState(state)){
            throwInvalidState(state);
        }
        else{
            this.notes.push({state, name});
        }
    }
    
    getNotes(state){
        let list = [];
        
        if(isInvalidState(state)){
            throwInvalidState(state);
        }
        
        for(let note of this.notes){
            if(note.state===state){
                list.push(note.name);
            }
        }
        
        return list;
    }
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);
    
    const obj = new NotesStore();
    const operationCount = parseInt(readLine().trim());
    
    for(let i = 1; i <= operationCount; i++) {
        const operationInfo = readLine().trim().split(' ');
        try {
            if (operationInfo[0] === 'addNote') {
                obj.addNote(operationInfo[1], operationInfo[2] || '');
            } else if (operationInfo[0] === 'getNotes') {
                const res = obj.getNotes(operationInfo[1]);
                if (res.length === 0) {
                    ws.write('No Notes\n');
                } else {
                    ws.write(`${res.join(',')}\n`);
                }
            }
        } catch (e) {
            ws.write(`${e}\n`);
        }
    }
    ws.end();
}
