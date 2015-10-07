//
//  MakePassengerList.h
//  [Cpp]Train
//
//  Created by Jsfumato on 2015. 10. 7..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef MakePassengerList_h
#define MakePassengerList_h

#include <string>
#include <fstream>

class MakePassengerList
{
private:
    static string fileSrc = "/Users/NEXT/Documents/Cpp_1/[Cpp]Train/[Cpp]Train/data/passengerList.csv";
    
public:
    static ArrayList<Passenger> makeList()
    {
        ArrayList<Passenger> passengerList = new ArrayList<Passenger>();
        
        try {
            File csv = new File(fileSrc);
            BufferedReader br = new BufferedReader(new FileReader(csv));
            String line = br.readLine();
            
            while ((line = br.readLine()) != null) {
                String[] token = line.split(",");
                passengerList.add(new Passenger(token));
            }
            br.close();
        }
        catch (FileNotFoundException e) {
            e.printStackTrace();
        }
        catch (IOException e) {
            e.printStackTrace();
        }
        
        return passengerList;
    }
}

#endif /* MakePassengerList_h */
