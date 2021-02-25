# 11 Box Model



### Box Model이란?

모든 HTML 요소는 Box 형태의 영역을 가지고 있다. 이 박스는 `Content(실제 내용)`, `Padding(내부 여백 영역)`, `Border(테두리)`, `Margin(외부 여백 영역)`으로 구성된다.



+  margin : A라는 요소와 다른 요소들과의 사이의 간격
+ padding : A라는 요소 안에서 테두리와 내용물의 간격 
+ border: 테두리



```html
<style>
    h1 {
        border : 5px solid red; /*테두리 색깔 넣기*/
        margin-top: 50px; /*위의 요소와의 간격을 50px로 만들기*/
        padding: 50px 65px 20px 80px; /*위 오 밑 왼 순서(시계방향 순)*/
        /* 같으면 padding: 50px;처럼 사용할 수도 있다.*/
    }
    .p1 {
        margin-left: auto;
        margin-right: auto; /*가운데 정렬*/
    }
</style>
```



### width, height

+ 글이나 사진 모두 크기를 설정할 수 있다.
+ 내용물의 크기를 지정해주는 것이다. padding이나 border 등의 설정이 추가된다면 달라질 수 있다.

```html
<style>
    .p1 {
        width: 500px;/*가로*/
        height: 50px; /*세로*/
    }
    .p2 {
        min-width: 500px; /*최소 가로길이. 화면을 줄여도 이 이하로는 줄여지지 않는다.*/
        max-width: 500px; /*최대 가로길이*/
        min-height: 200px; /*최소 세로길이*/
        max-height: 100px; /*최대 세로 길이. 넘치면 오버플로우의 속성 활용*/
    }
</style>
```



### overflow

+ Mac OS에서는 스크롤을 할 때만 스크롤바를 보여주기 때문에 scroll과 auto의 차이를 보기 힘들 수도 있다.

```html
<style>
    .p1 {
        overflow: hidden; /*넘치는 부분은 숨기기*/
        overflow: visible; /*기본값, 넘치는대로 보임*/
        overflow: scroll; /*그냥 볼 때는 hidden, 스크롤이 필요 없을 때도 생김*/
        overflow: auto; /*박스의 크기를 넘었을 때만 scroll*/
    }
</style>
```



### border

+ `<input>`태그와 같은 요소들은 기본적으로 테두리가 설정되어 있는데, 이 테두리를 없애고 싶으면 `border: none;` 또는 `border: 0;`으로 설정해주면 된다.

https://developer.mozilla.org/en-US/docs/Web/CSS/border-style

```html
<style>
    .p1 {
        border: 2px solid black; /*굵기 종류(dotted, solid, dashed) 색깔*/
        
        border-style: solid; 
        border-color: ;
        border-width: ;
        
        border-top: 3px dotted #4d9fff;
  		border-bottom: 2px dashed red;
  		border-left: 5px solid green; /*위치마다 다른 테두리를 설정 해줄 수 있다.*/
    }
</style>
```



### 박스 꾸미기

+ 둥근 모서리

  값이 클수록 더 둥글게 된다.

  ```html
  <style>
      .p1 {
          border: 3px dotted yellow;
          border-radius: 50px;
          
          border-top-left-radius: 50px;/*각 모서리마다 개별 설정하는 것도 가능하다*/
      }
  </style>
  ```

  

+ 배경색

  padding부분과 content 부분의 색을 다르게 나타낼 수도 있다.

  ```html
  <style>
      .p1 {
          background-color: blue;
          /*투명하게 하고 싶을 때는 transparent 기본값*/
      }
  </style>
  ```

  글자색같은 경우에는 `color: ;`를 사용한다

  

+ 그림자

  ```html
  <style>
      .p1 {
          box-shadow: 50px 30px 50px -01px yellow;/*오른쪽 아래 흐림정도 그림자크기 색깔*/
          box-shadow: -50px -30;/*왼쪽 위*/
          box-shadow: none; /*그림자 없음*/
      }
  </style>
  ```



### box-sizing

```html
<style>
    * {
        box-sizing: borde-box; /*패딩과 테두리가 크기에 포함된다. 기본값은 content-box*/
    }
    .p1 {
        width: 300px;
        height: 200px;
        padding: 35px;
        border: 5px;
    }
</style>
```



### 배경 이미지

```html
<style>
    .div1 {
        background-image: url("");
        background-repeat: ; /*이미지 반복*/
        background-size: cover; /*배경을 꽉 채우면서도 비율을 유지하겠다 / 잘리는 부분이 생김*/
        background-position: center bottom; /*가로로 잘릴 때는 가운데가 보이게, 세로로 잘릴 때는 아래쪽이 보이게 함*/
    }
</style>
```

