// JavaScript (Basic) Certification

// ...

function throwUnderage(){
    throw new Error("Staff member age must be greater than 20");
}

class StaffList {
    constructor(){
        this.members = [];
    }
    
    add(name, age){
        if(age>20){
            this.members.push({name, age});
        }
        else if(age<=20){
            throwUnderage();
        }
        
        let found = false;
        
        for(let member of this.members){
            if(member.name===name){
                found = true;
            }
        }
        
        if(!found){
            this.members.push({name, age});
        }
    }
    
    remove(name){
        for(let i=0; i<this.members.length; i++){
            if(this.members[i].name===name){
                this.members.splice(i, 1);
                return true;
            }
        }
        return false
    }
    
    getSize(){
        return this.members.length;
    }
}

// ...