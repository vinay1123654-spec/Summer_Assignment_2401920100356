//LibraryUser.java
interface LibraryUser{
   void registerAccount();
   void requestBook();
}


//KidUser.java
class KidUsers implements LibraryUser{
   int age;
   String bookType;
   public void registerAccount(){
      if(age<=12){
           System.out.println("You have successfully registered under a Kids Account");
      }
      else{
           System.out.println("Sorry,Age must be less than 12 to register as a kid");
      }
  }
   public void requestBook(){
      if(bookType.equalsIgnoreCase("Kids")){
           System.out.println("Book Issued successfully,please return the book within 10 days");
      }
      else{
           System.out.println("Oops,you are allowed to take only kids books");
      }
   }
}

//AdultUser.java
class AdultUser implements LibraryUser{
   int age;
   String bookType;
   public void registerAccount(){
      if(age>12){
           System.out.println("You have successfully registered under an Adult Account");
      }
      else{
           System.out.println("Sorry,age must be greater than 12 to registered as an adult");
      }
   }
   public void requestBook(){
      if(bookType.equalsIgnoreCase("Fiction")){
           System.out.println("Book Issued successfully,please return the book within 7 days");
      }
      else{
           System.out.println("Oops,you are allowed to take only adult Fiction books");
      }
   }
}

// LibraryInterfaceDemo
public class LibraryInterfaceDemo{
   public static void main(String[] args){
// Test Case 1-KidUsers
   KidUsers kid1=new KidUsers();
   kid1.age=10;
   kid1.registerAccount();
   kid1.bookType="Kids";
   kid1.requestBook();
   System.out.println();

   KidUsers kid2=new KidUsers();
   kid2.age=18;
   kid2.registerAccount();
   kid2.bookType="Fiction";
   kid2.requestBook();
   System.out.println();

// Test Case 2-AdultUsers
   AdultUser adult1=new AdultUser();
   adult1.age=5;
   adult1.registerAccount();
   adult1.bookType="Kids";
   adult1.requestBook();
   System.out.println();

   AdultUser adult2=new AdultUser();
   adult2.age=20;
   adult2.registerAccount();
   adult2.bookType="Fiction";
   adult2.requestBook();
   System.out.println();
   }
}

