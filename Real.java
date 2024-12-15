 class Demo {
    private int R ,img;
    public void setReal (int R){
        this.R =R;
    }
    public int getReal(){
        return R ;
    }
     public void setImg (int img){
            this.img =img;
        }
     public int getImg(){
            return img ;
        }
        public void printReal(){
          System.out.println(R +"+" +img +"i");
        }
       }
public class Real{
    public static void main(String [] arg){
        Demo obj = new Demo();
        obj.setReal(5);
        obj.setImg(8);
        obj.printReal();
    }
}
    
