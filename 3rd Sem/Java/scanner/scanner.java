import java.util.* ; 
class Person {
    private String name;
    private int age;
    public void setnm (String Name){
        this.name = Name;
    }
    public String getnm(){
        return name;
    }
    public void setage (int age){
    this.age = age;
    }
    public int getage (){
        return age;
    }}
class Main {
    public static void main(String[] args) {
        
        Person obj = new Person();
        Scanner input = new Scanner(System.in);
         System.out.println("Enter your name ");
         String name = input.nextLine();
         obj.setnm(name);
          System.out.println("Enter your age ");
          int age = input.nextInt();
          input.nextLine();
          obj.setage(age);
        System.out.println("Name is "+obj.getnm());
        System.out.println("Age is "+obj.getage());
       
    }
}