# Java_codingTest_3rdWeek

## 문제 해설

problem 41 :  3진법 뒤집기 

- 문제 해설 : ArrayList를 기준으로 시작하면 스택에 넣어둔다. 뒤에서부터 넣었으니 이제 앞에서부터 탐색하면서 ‘0’가 나오면 break하고 다시 10진법으로 바꿔준다.
- 시간복잡도 : O(N)
- 사용한 자료구조 : Stack

problem 42 : 

- 문제 해설 : 배열에 담긴 두 수를 더해서 나올 수 있는 수를 전부 모아서 리턴해라
- 시간복잡도 : O(200 * 50 = 10000)

problem 43 : 

- 문제 해설 : 왼손 엄지의 처음 위치는 별표고, 오른쪽 엄지의 처음 위치는 샵입니다. 현재 위치에서 1, 4, 7은 왼손 엄지가 누르고, 3, 6, 9는 오른손 엄지가 누릅니다. 2, 5, 8, 0은 왼손 엄지, 오른손 엄지의 현재 위치 중에서 더 가까운 손가락이 누르고, 거리가 가까울 때는 왼손잡이냐 오른손잡이냐에 따라서 달라집니다.
    
    왼손 엄지로 클릭할 땐 “L”을 더해주고, 오른손 엄지로 클릭할 땐 “R”를 더해줘서 리턴해줍니다. 
    
- 시간복잡도 : O(N) = O(|numbers|)
- 알고리즘 : 구현

problem 44 : 크레인 인형뽑기 게임 

- 문제 해설 : 주어진 move를 기준으로 가장 위에 있는 0이 아닌 값을 찾는다. 그러한 값이 존재하지 않는다면 그 위치에서 옮길 수 없기 때문에 그냥 continue를 해주고, 그러한 값이 존재한다면, stack에 넣어주는데 stack의 top이 넣으려고 하는 캐릭터와 같다면 cnt+=2를 해준다. 그리고 원래 위치에 값을 0으로 바꿔준다.
- 시간복잡도 : O($N^2$)


problem 45 : 실패율 

- 문제해설 : 스테이지 개수가 주어진다. 실패율은 다음과 같이 정의한다. : 현재 스테이지에 남아있는 사람 / 현재 스테이지를 들어간 사람. 각 스테이지별로 실패율의 값을 계산하고, 실패율을 내림차순 하고 리턴한다.
- 시간복잡도 : O($n\log(n) + n^2$)

problem 46 : 체육복 

- 문제 해설 : 체육복을 잃어버린 학생 리스트, 여벌이 있는 학생 리스트가 주어집니다. 처음 학생들을 전부 1로 초기화를 한 뒤에 잃어버린 학생은 -1, 여벌이 있는 학생들은 +1를 해주고, 최종적으로 현재 인덱스를 기준으로 1보다 크다면, 왼쪽이 0인지, 오른쪽이 0인지 검사합니다. 왼쪽 먼저 체크를 해야 합니다.

시간복잡도 : O(N) 

problem 47 : 모의고사 

- 문제 해설 : 1번 수포자, 2번 수포자, 3번 수포자가 찍는 방식을 문제수만큼 배열로 만들고 주어진 배열의 사이즈만큼 배열로 돌린 후에 가장 많이 맞춘 사람을 오름차순으로 정렬해서 리턴했다.
- 시간복잡도 : O($n)$

problem 48 : K번째 수 

- 문제 해설 : 정수 array가 주어진다. 주어진 array에 대해서 commands가 주어지는데 각 command는 [시작 인덱스, 끝 인덱스, 목표 인덱스]를 나타내고, 1-index로 되어있습니다. 주어진 배열을 따로 뺀 뒤에 정렬해서 ArrayList에 넣은 후에 리턴했습니다.
- 시간복잡도 : O(50 * 100 * $\log(100)$ )

problem 49 : 완주하지 못한 선수 

- 문제 해설 : participant의 이름을 key로, 각각을 cnt 해주는 map을 만들었고, completion을 읽으면서 map의 값을 -1 해주었습니다. 그리고 나서 map에 양수값에 해당하는 만큼을 ArrayList에 저장해서 리턴했습니다.
- 사용한 자료구조 : HashMap
- 시간복잡도 : O(N)

problem 50 : [1차] 다트 게임 

- 문제 해설 : 스택을 이용했고, 문자열에 대한 for-loop를 돌면서 현재 문자열이 숫자인 경우 스택을 비워주면서 계산했다. 이때 스택의 길이가 2인 경우, 3인 경우 케이스를 나눠서 계산했다.
- 사용한 자료 구조 : Stack
- 시간 복잡도 : O(N)

problem 51 : [1차] 비밀지도 

- 문제 해설 : 숫자가 주어지면 그 숫자를 binary값으로 바꾸고 or를 한 값을 행에 채워주는 문제다.
- 시간 복잡도 : O($N^2$)

problem 52 : 예산 

- 문제 해설 : 주어진 예산에서 최대한 많은 부서에 예산을 채워줄 수 있도록 분배를 해야 한다. 그러려면 누적합 관점에서 작은 것부터 더해야 하기 때문에 정렬을 하고 시작한다. 따라서 현재 인덱스에 해당하는 값을 더해도 budget보다 크지 않으면, 계속 반복문을 진행하고 그렇지 않으면 반복문을 끝내고 리턴한다.
- 시간 복잡도 : O(N)
- 알고리즘 : 그리디

problem 53 : 소수만들기 

- 문제 해설 : 주어진 배열에서 서로 다른 3개를 더해서 소수가 되는 경우의 수를 카운트해야 한다. 소수를 체크하는 건 이미 앞서 언급했기에 시간복잡도 O($\sqrt{n}$ ) 만 언급하고 생략한다.
- 시간복잡도 : O($\text{n}^3 \sqrt{n})$
- 알고리즘 : 수학, 구현

problem 54 : 직사각형 별 따먹기 

- 문제 해설 : 가로, 세로 값이 n, m으로 주어진다. 별로 채워진 m x n 직사각형을 프린트해준다.
- 알고리즘 : 구현
- 시간복잡도 : O(n $\times$  m )

problem 55 : **x만큼 간격이 있는 n개의 숫자**

- 문제 해설 : 현재 값 x를 cnt 1로 시작한다. 현재부터 n번까지 배수를 모아서 리턴한다.
- 시간복잡도 : O(N)
- 주의사항 : 주어진 x의 최댓값이 int의 최댓값 $2^{31}-1$ 를 넘어갈 수 있기 때문에 long으로 선언해서 해야 합니다. (자바 기준)

problem 56 : 행렬의 덧셈

- 문제 해설 : 말그대로 행렬의 덧셈을 구현하면 된다.
- 시간복잡도 : O($n \times m$)

problem 57 : 핸드폰 번호 가리기 

- 문제 해설 : 주어진 번호의 길이를 n이라고 하자. 나머지 자릿수 n-4를 “*”로 바꾸고 뒷자리 4자리를 그 뒤에 더해서 리턴한다.
- 시간복잡도 : O(N)

problem 58 : 하샤드 수 

- 문제 해설 : 주어진 수를 x라고 하자. 전체 자릿수를 다 더한 걸 y라고 하자. x % y 가 0이면 하샤드 수이다. x를 10으로 나눠주면서 주어진 수를 10으로 나눈 나머지를 계속 더하면 된다.
- 시간복잡도 : O($\log_{10}{n}$)

problem 59 : 평균 구하기

- 문제 해설 : 산술 평균을 구한다.
- 시간복잡도 : O(N)

problem 60 : 콜라츠 추측 

- 문제 해설 : 짝수라면 2로 나눈다. 홀수라면 3을 곱하고 1을 더합니다. 결과로 나온 수가 1이 될 때까지 반복합니다. 그러나, 500번을 반복해도 1이 되지 않는다면 1이 될 수 없는 수기 때문에 -1을 리턴합니다.
- 시간복잡도 : O(N)
- 주의사항 : 500
