# CSS 기초

```css
h1 { <!--스타일링 하고 싶은 요소-->
	font-size: 64px; <!-- 속성:속성 값; -->
	text-align: center;
}
p i {
    font-size: 50px;
}
```

css 파일을 따로 만드는 방법도 있지만, 설정할 것이 그렇게 많지 않다면 html 코드에 `<style></style>`을 사용하여 css 코드를 추가할 수 있다.

1. `text-align`은 글자 정렬에 대한 것이다.

2. `margin`은 여백을 말한다.

3. `flex`는 레이아웃(특정 영역 안에 요소 배치) 전용 기능으로 고안되었다.

4. `justify-content`은 주 축의 정렬 방법을 설정하는 것이다.

5. 특정 태그 안에 있는 태그만 따로 설정하고 싶을 때는 `(더 큰 범위의 특정 태그) (안의 태그) {}`로 설정해준다.

6. `px`는 표시장치(모니터)에 따라서 상대적인 크기를 가지고, `%`는 기본 글꼴의 크기에 대하여 상대적인 값을 가진다. -> 다양한 폰트 크기 단위 중 가장 많이 사용되는 것이 px이다.

7. 텍스트에 색을 입히고 싶으면 `color` 속성을 사용하면 된다.

8. `display`는 요소를 어떻게 보여줄지 설정하는 것이다.

    `none`은 보이지 않음/ `block`은 블록박스/`inline` 인라인 박스/`inline-block`은 block과 inline의 중간 형태/ `flex`는 flexbox를 만든다
    
9. `background-color` 배경색/ `border-radius` 모서리/ `padding` 박스 안 여백

10. 가운데 정렬

    `margin-left= auto;
    margin-right= auto;`

11. CSS의 코멘트(주석)은 `/**/`로 한다.
