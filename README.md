# WinchRack_Type2 

# 1. WinchRack_Type2_V1 Release

WinchRack_Type2 V1 for ERCF buffer 

youtube WinchRack_Type2 V1 Testing video : https://www.youtube.com/watch?v=6KahxyvfvtI<br>


ERCF(당근)과 연동하여 테스팅한 유투브 영상입니다.<br>
youtube WinchRack_Type2 V1 Applying ERCF video : https://www.youtube.com/watch?v=UDQim4SroeI




v6cl (방탄쪼끼) is a nice member from Korea and VORON User kakao chat room. <br>
He has adapted the design and helped remove shortcomings in the multi-color ERCF buffer, for which we are grateful. <br>
Building upon his design, I have received wonderful ideas to modify the structure for improved spatial aspects and easier spool install.

방탄쪼끼님 멋져요!


You can access his original material through the link below.<br>

v6cl WinchRack original Verison github : https://github.com/v6cl/WinchRack/tree/main

v6cl Test youtube video : https://www.youtube.com/shorts/trHfZH3sDRs






# WinchRack Type2

<div align="center">
	<img src="https://github.com/pure100kim/WinchRack_Type2/blob/main/V1/Photos/WinchRack_Type2_01.png" /><br>
	<img src="https://github.com/pure100kim/WinchRack_Type2/blob/main/V1/Photos/WinchRack_Type2_02.png" /><br>
	<img src="https://github.com/pure100kim/WinchRack_Type2/blob/main/V1/Photos/WinchRack_Type2_03.png" /><br>
 	<img src="https://github.com/pure100kim/WinchRack_Type2/blob/main/V1/Photos/WinchRack_Type2_04.png" /><br>
</div>
<br>




# BOM
Winchrack base component list has been imported as is.<br>

Wago 5pin x 2

(Choose option1) Opto endstop x 1 (https://zrr.kr/ZYrV)

(Choose option2) Opto interrupt x 1 (https://a.aliexpress.com/_oFFfkt0)

n20 gear motor 300 rpm 5v ~ 6v x 1 (https://zrr.kr/33Ta)

ls-p20/15 3kg x 2 (https://zrr.kr/Rqkb)

mosfet switch 1ch x 1 (https://zrr.kr/TrOc)

608zz x 8 (optoion 1 more : you can get 4mm bearing ball 608zz decomposition)

623zz x 8

silicon ring x 1 (https://zrr.kr/E5Dk)

PTFE tube 3x4 or 2x4

m3 insert nut (OD 5mm, L 4mm)

m3 bolts

m4 bolt 15mm x 2 (For ls-p20/15)

m2 self tapping screw 8~10mm x 4

6mm collet for 4mm PTFE Tube x 1 (https://zrr.kr/7WdG)

D2F Micro switch

4mm Bearing ball (608zz including 7 pcs 4mm ball. You can get it decomposition 608zz) 


<br>
<br>
<br>

# Connection Diagram (연결도)
<img src="https://github.com/pure100kim/WinchRack_Type2/blob/main/V2/Photos/WinchRack_Type2_Connection_Diagram.png" /><br>


<br>
<br>
<br>

# Assembly precautions
When assembling, make sure to clean the inside of the 608 bearing to ensure smooth rotation.
The bearing should rotate smoothly with minimal friction, at least for several turns.

Due to the friction of the bearing balls, the front and rear rails move, so be sure to assemble the 4mm bearings and switches.
<br>
<br>

# When reversing the polarity of the power supply
You can change the polarity of the power supply to reverse the motor direction, or to relocate the motor while maintaining the polarity marked on the motor as positive (+).
If you are changing the motor location, use stl file AccelMotor_mag_holder_Frame_Reverse.stl and FrontFoot_Reverse.stl

<br>
<br>
<br>



# 2. WinchRack_Type2_V2 version Release


1. AccelPedal 623zz 고정할때 둥근머리 볼트로 고정해야 합니다.<br>
When mounting AccelPedal 623zz, you should use a button head M3 bolt.

2. AccelPedal 조립 후 스풀 롤러와 Accel Roller 고무와 마찰이 잘 되도록 하기 위해<br>
   전자석이 1mm 정도 떨어졌다 붙었다 하게 됩니다.<br>
   최적 위치 조절하면서 볼트를 조여 주세요.<br>
After assembling the AccelPedal, adjust the rear bolt so that you get about 1mm of movement of the electromagnet.<br>
You want enough friction between the spool roller and the Accel Roller rubber.   



<img src="https://github.com/pure100kim/WinchRack_Type2/blob/main/V2/Photos/WinchRack_Type2_V2_01.png" /><br>

<img src="https://github.com/pure100kim/WinchRack_Type2/blob/main/V2/Photos/WinchRack_Type2_V2_02.png" /><br>

<img src="https://github.com/pure100kim/WinchRack_Type2/blob/main/V2/Photos/WinchRack_Type2_V2_03.JPG" /><br>


<br>
<br>
<br>


# 3. WinchRack_Type2 Weight : Filament remaining Weight version Release

<img src="https://github.com/pure100kim/WinchRack_Type2/blob/main/Weight/Photos/WinchRack_Weight_01.png" /><br>


# WinchRack_Type2 Weight Version Addtional BOM (추가 부품)

1. 5kg 무게 저울 센서 (보드 포함) 1개 <br>
   5kg Loadcell including HX711
2. 아두이노 NANO 1개 <br> 
   Arduino Nano Board <br>
   Recommand small size board : ESP32-C3    
4. 0.96 inch OLED 12C 버전 1개 <br>
5. M3 insert 6 PCS <br>
6. M4*12mm 4 PCS <br>
7. M3*8mm 6개<br>
8. 기타 전원선<br>

<br>
<br>
<br>

# WinchRack Type2 V3 BelayStyle : Design in progress




<br>
<br>

# History <br>
### 21 Feb 2024 : Changed the Modeling base on v6cl WinchdRack <br>
### 22 Feb 2024 : Currently in beta testing. <br>
### 23 Feb 2024
1. File modification for filament switch performance enhancement : SensorDetection_middle_Narrow.stl file.
2. Motor Mount location change.
<img src="https://github.com/pure100kim/WinchRack_Type2/blob/main/V1/Photos/WinchRack_Type2_07.jpg" /><br>

### 24 Feb 2024<br>
1. Opted for Rear Roller 608zz 4pcs instead of printed TPU Roller.
2. Added 2.5mm ~ 3mm space and 41mm pipe. You can adjust the gap.
3. Version1 Final Release
<img src="https://github.com/pure100kim/WinchRack_Type2/blob/main/V1/Photos/WinchRack_Type2_06.jpg" /><br>



### 27 Feb 2024<br>
락앤락 통에 넣을 수 있는 사이즈로 길이를 줄였습니다.<br>
1. Reduced lenth to 227mm, so it can be put in to a container.
   
<img src="https://github.com/pure100kim/WinchRack_Type2/blob/main/V2/Photos/WinchRack_Type2_V2_01.png" /><br>

### 28 Feb 2024<br>
필라멘트 잔여량 측정이 가능하도록 무게 측정하는 버전 개발 진행<br>
1. Spool Weight Beta version Modeling added

<img src="https://github.com/pure100kim/WinchRack_Type2/blob/main/Weight/Photos/WinchRack_Weight_01.png" /><br>


### 29 Feb 2024<br>
테스팅 결과 스풀의 무게로 롤러 양쪽이 쳐지는 문제가 발생이 되었습니다.<br>
구조적으로 쳐짐이 발생되지 않도록 설계 보강하였습니다.<br>
Reinforced the design, fixing rollers flexing down because of the spool weight. 

1. Design Change to Withstand Spool Weight Load <br>
<img src="https://github.com/pure100kim/WinchRack_Type2/blob/main/Weight/Photos/WinchRack_Weight_02.png" /><br>



### 01 Mar 2024<br>
1. Filament Remaining Weight arduino code verify completed <br>
2. Released Measure Filament remaining weight <br>
3. Made Connection Diagram <br>
<img src="https://github.com/pure100kim/WinchRack_Type2/blob/main/Weight/Photos/WinchRack_Weight_03.jpg" /><br>



### 12 Mar 2024<br>
1. WinchRack V3 is being designed to make the sensor rail simpler and bearing parts reduced.



감사합니다.
