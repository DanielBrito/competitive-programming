// https://www.hackerrank.com/challenges/time-conversion/problem

const input = "07:05:45PM";

function timeConversion(s: string): string {
  const initials = s.slice(s.length - 2);
  const timeWithoutInitials = s.replace(/[A-Z]/g, "");
  const time = timeWithoutInitials.split(":");

  if (initials === "AM") {
    return time[0] === "12"
      ? `00:${time[1]}:${time[2]}`
      : `${time[0]}:${time[1]}:${time[2]}`;
  } else {
    return time[0] === "12"
      ? `${time[0]}:${time[1]}:${time[2]}`
      : `${parseInt(time[0]) + 12}:${time[1]}:${time[2]}`;
  }
}

console.log(timeConversion(input));
