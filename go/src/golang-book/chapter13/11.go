package main
 
import ("fmt";"flag";"math/rand")
 
func main() {
    // 플래그 정의
    maxp := flag.Int("max", 6, "최댓값")
    // 파싱
    flag.Parse()
    // 0과 max 사이의 숫자를 생성
    fmt.Println(rand.Intn(*maxp))
}

