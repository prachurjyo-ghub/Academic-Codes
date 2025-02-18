public class car extends vehicle{
    @Override
    public void move (){
        System.out.println("Car is moving");
    }
    @Override
    public void carry (){
        System.out.println("Car is carrying");
    }
    public static void main (String[] args){
        car c = new car();
        c.move();
        c.carry();
        c.vehicle();
    }
    
}
