package main
import "fmt"


func main() {
    for i := 1; i <= 10; i++ {
     switch i {
case 0: fmt.Println("영")
case 1: fmt.Println("일")
case 2: fmt.Println("이")
case 3: fmt.Println("삼")
case 4: fmt.Println("사")
case 5: fmt.Println("오")
default: fmt.Println("알 수 없는 숫자")
    }
  }
}

