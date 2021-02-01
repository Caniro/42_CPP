- 헤더
	- 헤더에서 함수 정의하지 않기(템플릿은 제외?)
	- 헤더 가드 필수

- 출력
	- 모든 출력은 `stdout`으로 출력, 항상 `newline` 붙이기(특정한걸 요구하면 따르기)

- C++-ish 함수 사용
  - 기본적으로 모든 `standard library` 사용 가능
  - 금지 함수
    - *alloc, *printf, free
    - STL 금지
      - ex) vector, list, map, ...
      - module 08 이후 사용 가능
  - 금지 문법
    - using namespace
    - friend
    - `external library`
    - `C++11` 이상
    - `Boost`

- 특별한 말 없으면 `ClassName.hpp`, `ClassName.cpp` 양식으로 작성

- 제출 디렉토리는 `ex00`, `ex01`, ...

- 문제에서 명확하게 설명되지 않은게 예시에 있을 수 있으니 꼼꼼히 보기
  - 애매하게 느껴진다면 C++을 충분히 이해하지 못한 것

- You may be required to turn in an important number of classes. This can seem tedious, unless you’re able to script your favorite text editor. 뭐래

- `clang++` 컴파일러 사용
  - 플래그 : -Wall -Wextra -Werror

- `includes`는 서로 독립적이어야 한다 ?

- 코딩 스타일은 자유

- 특별히 명시되어 있지 않으면, 기계 채점은 없음
  - `exercises`를 얼마나 풀지는 자유
  - 요구하는 것보다 많은 파일을 제출해도 상관 X


