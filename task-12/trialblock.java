import java.util.Arrays;

public class Block{
    
    private int previousHash;
    private string[] transactions;

    private int blockHash;

    public Block(int previousHash, String[] transaction){       
        this.previousHash = previousHash;
        this.transactions = transaction;

        Object[] contens = {Arrays.hashCode(transaction), previousHash}; //calculating the hash of transactions
        this.blockHash = Arrays.hashCode(contens); // so basically this line of code lets us hash contens which contains the hash of 'this' block and the previous
    }                                               // block.... ie => if one hash changes(in previous), all the hashes change 

    public int getPreviousHash(){
        return previousHash;
    }

    public string[] getTransaction(){
        return transaction;
    }

}
