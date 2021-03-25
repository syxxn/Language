let year = 2021;
let month = 3;
let day = 25;

console.log("오늘은 " + year + "년 " + month + "월 " + day + "일입니다."); //여기는 따옴표
console.log(`오늘은 ${year}년 ${month}월 ${day}일입니다.`); //여기는 물결이랑 같이 있는 ``(억음 부호)

//실습 과제
function calcWage(name, time, wage) {
  let total = time * wage;

  console.log(
    `${name}님의 근무 시간은 총 ${time}시간이며, 최종 급여는 ${total}원 입니다.`
  );
}

calcWage("김윤식", 208, 11340);
calcWage("성규재", 175, 12160);
calcWage("손태웅", 161, 13070);
calcWage("허우선", 222, 10980);
