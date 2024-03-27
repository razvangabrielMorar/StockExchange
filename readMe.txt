#Compiled with X64 - Release + Debug.
#If StockData.json file is not present in the .exe folder, please copy it manually from the source Folder. 

#Technical Details
#We can create Instantiations by splitting the problem into multiple layers.
# 1. Stock Class - Holds a Stock.
# 2. SExchange Class - Holds a Stock Exchange, defined by a name, a code and multiple Stocks.
# 3. Market Class - Holds multiple Stock Exchange, creating a market for them.
# 4. JsonReaderHelper Class - Simple Utility class
# There's no point to manipulate the Stock / SExchange, since they are used to hold information, we can view them as the Platform / Data Layer.
# The Market Class is what we can manipulate and after can be extended to perform different operations such as. 
#          1) Get Specific Stock
#          2) Order Markets
#          3) Generate different Reports.
# Since it follows SOLID Principles this layer of decomposition of problem allows easy code modification / remove / add features at each Layer
# although as mentioned At Application Level you should only develop features using the Market Class Feature, do not go down unless mendatory ( Platform Level / Data Layer (Stock and SExchange));

#Other Technical Details:
# To read JSON, I have used the : nlohmann/json Library. Documantation can be found here : https://github.com/nlohmann/json/tree/develop/docs
# the /**/ inside code, is very useful if you want to generate Documentation / Helps Reader understand better.

#Solution Overview.
#The task is complex and can be extendend depending on REQ / Business Value / Capacity.
#I tried to focus on the Backend Part , because the frontEnd can take a lot of time and it's only for design purpose.
#Implemented using C++11, but can be achieved as well with C#- .NET or JAVA ( Personally I know all of them).
#Can also be achieved with Web Development using React - JavaScript, however as mentioned in my CV, I do not engage in web Probramming. Simply I do not have a passion for it.
#No need to spread it into multiple Threads, however if given a larger dataSet, you can have a workerThread that reads the data, and anotherThread that manipulates the data.
#Async, however you can syncronize them to always have available data, if not wait for data.
#Kept your Json FIle. No point in generating new Json. You can replace Positive values with Negative or Remove Names.
#See Error Codes.


#Unit Tests.
#Not implemented - Req did not mentioned, however Google Tests UT can do the trick. (atleast 1.5 Hours for UT)
#If you ever want to right good UT it will take atleast as much as the Code.

#Backend Duration - 1.5 Hours.
#Backend /**/ Documantation Duration - 30 Minutes.
#Frontend Duration - ~45 Minutes.
#Task mentioned ~2Hours, (I'm not counting Documantation time) Giving a total of 2 Hours 15 Minutes ->Code. + 30 Minutes for Documantation.

#FrontEnd.
#WINDOW.h File generates the FrontEnd.
#Many Options can be used, Windows Forms, QT Framework, Swing JAVA, however in order to keep things simple and achieve a ~2hour mark, I created an interactive Console Application.
#I prefer to work on backEnd rather than frontEnd because frontEnd should achieve user Experience and requires a lot of hours in development,
#and my area of expertise is Technical / Low Level / Management, not Marketing, User Experience.
#while I agree you should know a bit of everything you can only be PRO in your area, not all of them.


#Project Organization
#To DO: Split Headers/Persistence/.cpps in different folders: /inc /Persistence /source
# Can also create folder for /Documantation
# Apis/Lib can be in seperated folders.

#Feedback is appreciate (1to1 Meeting, not email written).

#CONTACT INFORMATION
# +40726773654 | work@morarrazvangabriel.com


