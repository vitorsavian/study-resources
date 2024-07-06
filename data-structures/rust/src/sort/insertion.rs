fn sort(arr: Vec<i32>) -> Vec<i32> {
    arr
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn it_works() {
        let mut result: Vec<i32> = sort(vec![1, 4, 5, 2, 10])
        println!("{}", result);
    }
}
