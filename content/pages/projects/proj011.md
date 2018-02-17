Title:An Unsupervised Grammar Induction System For Teleoperation
status:hidden

<h3>An Unsupervised Grammar Induction System For Teleoperation</h3>



<p>
A teleoperation system is basically a dual robot system in which a remote slave robot tracks the motion of a master   
robot   that   is commanded by a human operator.  A  typical   telerobotic system  is composed of  a human operator  
maneuvering a master robot and a slave robot working on a remote and/or hard to reach environment. Motivated by  
the large variety of applications,  ranging from space explorations to mining, medical  applications to nuclear waste  
decontamination teleoperation have been studied extensively.
</p>

<br/>
<center>
   <img src="{filename}/files/proj011/fig1.png"  style="   display: block;   margin-left: auto;   margin-right: auto; max-width: 100%;" />

</p>

</center>


<p>
Despite their popularity, the research on teleoperation systems have a number of unsolved problems. Two of the main  
promlems are, (i) Due to the limited data transfer rates between the local and remote sides substantial time delays may  
occur  and  the operators might     find  these systems difficult   to operate.   (ii)  Second,   the  interactions between  the  
operator and the system are usually regarded as unnatural since the operator and the robot does not have similar  
anatomy. In order to address these problems, researchers mostly upgraded the interaction between the system and  
the operator to a more abstract level. Using higher level programming languages or even natural languages were some  
of the proposed solutions. Other types of solutions included learning from demonstrations (LfD) techniques. With LfD,   
the operator  shows how a  task  is performed  to  the  robot  and  the system  learns  the  task.  LfD  is  regarded as a  
supervised learning method. It has many advantages but the need for a supervisor is one drawback of this method. 
The project proposed introduces an unsupervised LfD method for teleoperation. It is expected that the unsupervised  
learning system will be more useful and flexible because it does not require the operator to act as a supervisor. The  
planned system asks the operator to perform a classical teleoperation task and it observes the commands issued by  
the operator. At the same time, the system makes an automatic analysis of the visual data of the scene. The system  
learns the grammar rules of the most frequently performed operations. These grammar rules are later offered to the  
operators when  they are applicable,  which moves  the  interaction  level  between  the operator and  the system  to a  
higher level. The proposed system seems difficult to realize but recent development in grammar learning and visual   
scene parsing will make the proposed ideas applicable. New techniques especially from  the field of computer vision  
will be very useful in learning grammars in an unstructured environments. 
</p>

<p>
In order to make the operators feel themselves in a more natural environment, we will use active 3D cameras to gather   
3D scenne  information  from  the  robot  site.  This  information will  be used  for  a  realistic 3D  reconstruction of   the   
environment. We will also track the head positions of the operators to produce virtual scene images from the point of   
view of the operator, which will increase the operator depth perception. 
</p>


<br/>
<center>
   <img src="{filename}/files/proj011/fig2.png"  style="   display: block;   margin-left: auto;   margin-right: auto; max-width: 100%;" >

</p>

</center>

<p>
The   proposed   project  will   concentrate  mostly   on   human-system  interaction,  machine   learning,   3D  visual   data  
analysis , hence the outputs of our project might not contain any novelties on control theory. We will build a testing   
site at the Department of Computer Engineering of Gebze  Institute of Technology. Our laboratories already  include  
almost all of the required equipment for this project which include robot arms, haptic control arms, 3D and 2D video  
cameras, position trackers, and lighting equipment. The initial system experiments will include tasks for moving and  
manipulating solid blocks from one positions to another. We will also look into using the resulting system in disaster   
search and rescue operations.
</p>


<strong>Publications</strong>
<ul class=cListPB10>
	<li><a class=cDL href="publications/2013/KarahanGencAkgul.pdf">
	Samil Karahan,Yakup Genc, Yusuf Sinan Akgul, "A New 3D Line of Gaze Estimation Method 
	with Simple Marked Targets and Glasses", 3rd International Workshop on Pervasive Eye Tracking and Mobile Eye-Based Interaction, ECEM, Lund, August 2013.</a></li>
	<li><a class="cDL" href="publications/2014/camera ready.pdf">
	Abdullah Akay and Yusuf Sinan Akgul, "3D Reconstruction with Mirrors and RGB-D Cameras",
	9th International Conference on Computer Vision Theory and Applications (VISAPP), Lisbon, January 2014.
    </a></li>
	
	
</ul>
