use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();
    let mut tokens = input.split_whitespace();

    let n: usize = tokens.next().unwrap().parse().unwrap();

    let mut scores = Vec::with_capacity(n);
    let mut max_val: f64 = 0.0;

    for _ in 0..n {
        let val: f64 = tokens.next().unwrap().parse().unwrap();
        if val > max_val {
            max_val = val;
        }
        scores.push(val);
    }

    let sum: f64 = scores.iter()
        .map(|&s| (s / max_val) * 100.0)
        .sum();

    println!("{}", sum / n as f64);
}