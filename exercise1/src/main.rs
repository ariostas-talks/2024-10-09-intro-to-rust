


  fn main() {
    let 
    mut x = 0; // assumes i32
        let  myvec = Vec::new
        ();

 println!(
        "x is {}", 
    x);
    println!(  "myvec is {:?}",   myvec); // {:?} is a debug print

    for i        in 1..10 {
        x   += i;
        println!(   "x is now {}", x);

    myvec.push(x);
  println!("myvec is now {:?}", myvec);}

if myvec.len() != 0 {println!("The last element of myvec is {}", myvec[myvec.len() - 1]);}
    }
