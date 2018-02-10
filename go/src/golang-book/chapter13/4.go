package main
 
import (
    "os"
)
 
func main() {
    file, err := os.Create("test.txt")
    if err != nil {
        // 오류를 처리
        return
    }
    defer file.Close()
 
    file.WriteString("test")
}

