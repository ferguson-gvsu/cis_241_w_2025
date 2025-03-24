class Test{
  public static void recurse(int n){
    System.out.println(n);
    recurse(n + 1);
  }

  public static void main(String[] args){
    recurse(0);
  }
}
