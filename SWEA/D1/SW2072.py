T = int(input())
# 여러개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
for test_case in range(1, T + 1):
    # ////////////////////////////////////////////////////////
 
        numbers = list(map(int, input().split()))
        odd = [num for num in numbers if num % 2 == 1]
 
        print('#{} {}'.format(test_case, sum(odd)))
 
    # ////////////////////////////////////////////////////////
