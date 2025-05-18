package ksp2029;


public class Item {
    double object,profits,weight;
    public Item(double object,double profits,double weight)
    {
    	this.object=object;
    	this.profits=profits;
    	this.weight=weight;
    }
	public double getObject() {
		return object;
	}
	public void setObject(double object) {
		this.object = object;
	}
	public double getProfits() {
		return profits;
	}
	public void setProfits(double profits) {
		this.profits = profits;
	}
	public double getWeight() {
		return weight;
	}
	public void setWeight(double weight) {
		this.weight = weight;
	}
	@Override
	public String toString() {
		return "Item [object=" + object + ", profits=" + profits + ", weight=" + weight + "]";
	}
   
}
