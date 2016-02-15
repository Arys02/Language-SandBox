use std::io::Write;
fn main() {
    println!("Hello, world!");
    let tab = [0, 2, 3];
    let s = &tab;
    let mut v = Vaisseau::new();
    let a = 2;
    let str_a = format!("{}", a);
    let t = Tuple(0, 2, false);

    let p = Point {
        x : 0,
        y : 0
    };


    println!("{}", str_a);
    v.nbr = Some(5);
    let mut w = Vec::new();
    write!(&mut w, "test");

}

struct Vaisseau {
    nbr: Option<i32>
}

impl Vaisseau {
    pub fn new() -> Vaisseau {
        Vaisseau {
            nbr: None
        }
    }
}


pub struct Distance {
    metre: isize
}

impl Distance {
    pub fn new() -> Distance {
        Distance {
            metre : 0
        }
    }
    pub fn new_val(x : isize) -> Distance {
        Distance {
            metre : x
        }
    }
    pub fn to_kilom(&self) -> isize {
        self.metre / 1000
    }
    pub fn set_distace(&mut self, new_dist : isize) {
        self.metre = new_dist;
    }
}
