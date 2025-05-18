package huffmancoding;
import java.util.*;
public class HuffmanComparator implements Comparator<HuffmanNode> {
  public int compare(HuffmanNode x,HuffmanNode y)
  {
	  return x.data-y.data;
  }
}
