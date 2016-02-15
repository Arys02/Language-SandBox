extern crate rand;
use std::io;
use rand::Rng;

fn main() {
    while true {
        get_str();
        println!("numbre {}", get_rand());
    }
}

fn get_str() -> String {
    println!("Guess the number !");

    let mut guess = String::new();
    io::stdin().read_line(&mut guess)
        .ok()
        .expect("ERROR.");
    return guess;
}

fn get_rand() -> i32 {
  return rand::thread_rng().gen_range(1, 101);
}

