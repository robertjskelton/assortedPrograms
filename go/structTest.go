/** 
*
* Author: 		Robert Skelton
* Date 			2.4.14
* Filename: 	hello.go
* Email: 		robertjskelton@gmail.com
* Description:  Basic go testing.
*
*/

package main

import "fmt"

type Rectangle struct {
	width, height int
}

func (r *Rectangle) area() int {
	//return float64(r.height * r.width)
	return r.height * r.width
}

func main() { 
	r := Rectangle{6,8}
	fmt.Println(r.area)
}