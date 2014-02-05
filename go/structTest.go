/** 
*
* Author: 		Robert Skelton
* Date 			2.4.14
* Filename: 	structTest.go
* Email: 		robertjskelton@gmail.com
* Description:  Basic structs in go testing.
*
*/

package main

import "fmt"

type Rectangle struct {
	width, height int
}

func (r *Rectangle) area() float64 {
	return float64(r.height * r.width)
}

func main() { 
	r := Rectangle{5, 12}
	fmt.Println(r.area())
}