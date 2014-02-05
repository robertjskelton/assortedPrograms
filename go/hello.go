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

func main() { 
	fmt.Printf("\nThis is Robert's first program!\n")
	
/*	// print 1 - 10, print if :) or :()
	for i := 1; i <= 10; i++ {
		if i % 4 == 0 {
			fmt.Println(i, ":)")
		} else {
			fmt.Println(i, ":(")
		}
	}

	var s string = "Hello world"
	su := "Hi!"
	fmt.Println("\n" + s)
	fmt.Println(su)
	
	su = "new var guys"
	fmt.Println(su)*/

	//fmt.Println("su" + "s" == "new ver guysHello world")

	// slice is an array
	/*slice1 := []int{0,1,2,3,4,5,9}
	fmt.Print(len(slice1))
	fmt.Print(" is the length\n")

	for key, value := range slice1 {
		fmt.Println(key, value)
	}
	*/

	// get 5 lines of input
	/*slice := make([]string, 5, 10)
	for key, _ := range slice {
		fmt.Printf("Enter in string number %d ", key)
		fmt.Scan(&slice[key])
	}*/
	//slice = append(s)(slice, slice...)
	//for _, value

	romanNums := map[string]int{}
	/*for i := 1; i < 6; i++ {
		romanNums[i] = i;
		//fmt.Println("Roman nums")
	}	*/

	romanNums["I"] = 1
	romanNums["II"] = 2
	romanNums["III"] = 3
	romanNums["IV"] = 4
	romanNums["V"] = 5

	//fmt.Println(romanNums[4])
	fmt.Println("Please enter two Roman numerals")
	var s1 string
	fmt.Scan(&s1)

	var s2 string
	fmt.Scan(&s2)

	value1, found1 := romanNums[s1] 
	value2, found2 := romanNums[s2]
	if (found1 && found2) {
		fmt.Println("The sum is: ")
		fmt.Printf("%d", value1 + value2)
		fmt.Println()
	} else {
		fmt.Println("not even ROMAN")
	}










}
