use std::fs::File;
use std::str::*;
use std::io::prelude::*;
use std::i32;

fn main() {

    let mut file = match File::open("data") {
        Ok(file) => file,
        Err(msg) => panic!("Error {}", msg),
    };

    let mut s = String::new();
    match file.read_to_string(&mut s) {
        Ok(_) => println!("Successfuly readed"),
        Err(msg) => panic!("Error :{}", msg),
    }
    let mut vec : Vec<&String> = s.split("\n").collect();
    let nb_str = vec[0];
    for i in 1..vec.size() {

    }
    let num : i32 = atoi(nb_str);
    println!("{}", num);
}

fn atoi(n : String) -> i32 {
    return n.parse::<i32>().unwrap();
}
