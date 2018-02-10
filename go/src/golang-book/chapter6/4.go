package main
import "fmt"

func main() {

x := []int{
   48,96,86,68,
   57,82,63,70,
   37,34,83,27,
   19,97, 9,17,
}
 fmt.Println(len (x)) 
 var n int = len(x)
 max :=x[0]
 for i :=0; i<=n; i++ {
  if x[i] < max {
    max=x[i]
    
  }
 fmt.Println(max)
 }
}
