Title:Monitoring System For Home-Based Physiotherapy Exercises
status:hidden


<h3>Monitoring System For Home-Based Physiotherapy Exercises</h3>
<h5></h5>

<p><br><strong>Project Team : </strong>
Ilktan Ar and <a href="http://www.bilmuh.gtu.edu.tr/~akgul/">Dr. Yusuf Sinan Akgul.</a></p>


<p>
Physical therapy (or physiotherapy) is a medical science that concerns with the diagnosis and
treatment of patients who have injuries or other problems that limit their capabilities to perform
functional activities. Physical therapists provide care to patients by offering a treatment to reduce pain,
prevent disability, and restore function. These treatments usually include physiotherapy exercises.
However, human power, money, and time resources are not generally sufficient to do one-to-one
sessions with all patients. Additionally, physical therapy is a long duration process. These problems
lead to home-based physical therapy exercises and there is a need to monitor this type of treatment.
</p>
<p>
In this project, we design a robust, low-cost, vision based monitoring system for home-based physical
therapy exercises. Instead of expensive systems which require specialized hardware, our system
use a low-cost Microsoft Kinect sensor which contains a depth and an RGB camera. This monitoring
system recognizes the exercise type and estimates the repetition count in each exercise session.
A dataset of home-based physical therapy exercises (HPTE) to demonstrate shoulder and knee
exercises is created by consulting physiotherapists. A total of 240 exercise sessions (30 for each
exercise type) are stored as gray-level and depth videos. In these exercise sessions, five volunteers
performed eight exercises in six series. The exercise sessions are restricted to contain one actor
performing one exercise repeatedly. Details of the exercises with sample frames are shown in Fig. 1.

</p>
<p>
<img src="{filename}/files/proj09/fig1.jpg"  style="   display: block;   margin-left: auto;   margin-right: auto; " />
<p>
The design of the monitoring system contains an exercise recognition and a repetition count estimator 
module; the former is responsible for the exercise recognition process and the latter is responsible for 
the estimation of the repetition count, as shown in Fig. 2. Exercise recognition module is divided into 
two parts: low-level and high-level. 



<p>
<img src="{filename}/files/proj09/fig2.jpg"  style="   display: block;   margin-left: auto;   margin-right: auto; " />
<p>
The low-level part of exercise recognition module utilizes gray-level and depth videos to form 
representations of motion, stance, object information. Motion information in videos is the main element 
of exercise recognition. Exercises have different motion patterns as in Fig.1. These motion patterns 
are extracted and represented by 3D Haar-like features. Stance/pose information about an exercise 
session supports the other information sources when there are problems like occlusion, noise, high 
differences in temporal variances or etc. Stance information is obtained by morphological operations 
on silhouette images. While most of the physiotherapy exercises include object interaction, object 
information in the video sequences reveals important clues about the type of these exercises. Object 
information is obtained by employing state-of-the art object detection algorithms.
<p>
The high-level part of exercise recognition module aims to classify the exercise in the given video 
by using the representations obtained at the low-level part. A generative Bayesian network structure 
is build for the assignment of exercise label to the video of the each exercise session because of 
the robustness of Bayesian networks for representing of joint distributions and encoding conditional 
independence assumptions. The generative Bayesian network uses the graphical model in Fig. 2a 
to represent conditional independence relationships between random variables: exercise (E), object 
information (O), motion information (M), stance information (S), and Representation (R).
<p>
A home-based physiotherapy exercise session consists of a number of repetitions of the same 
exercise. The repetition count in a session is assigned by physiotherapists. It is important to record the repetition count for treatment analysis. In this project, we focus on motion and stance information to 
define a new sub-global representation of exercise sessions. Confidence values are obtained by using 
these representations in SVM formulation. Examining of confidence values lead us to estimate the 
repetition counts.
<p>
The experimental results showed that our system can effectively recognize the exercise in the given 
exercise session.We also observed that the monitoring system estimates the repetition count of the 
exercises in the given exercise sessions with encouraging results. To the best of our knowledge, the 
proposed system is the first system to monitor home-based exercises that includes objects by using a 
low-cost Microsoft Kinect sensor
<p>
Please fill out the download Home-based Physical Therapy Exercises (HPTE) 
<a href="https://docs.google.com/forms/d/1rqC8QBqNNvHudX6vgMcF5j3u-rYpKq8YdzhreJkx8RA/"> dataset form here. </a>


<p>&nbsp;<p>&nbsp;
<strong>Publications</strong>
<ul class=cListPB10>

	<li><a class=cDL href="{filename}/pdfs/2012/iar_ysa_ISCIS_12.pdf">Ilktan Ar and Yusuf Sinan Akgul. "A Monitoring System for Home-Based Physiotherapy Exercises", 27th International Symposium on Computer and Information Sciences (ISCIS), Paris, October 2012.
    
    </a></li>
	
	<li><a class=cDL href="{filename}/pdfs/2012/iar_ysa_ICCVG_12.pdf">Ilktan Ar and Yusuf Sinan Akgul. "A Framework for Combined Recognition of Actions and Objects", International Conference on Computer Vision and Graphics (ICCVG), Warsaw, September 2012.
    
    </a></li>
	
	<li><a class=cDL href="{filename}/pdfs/2014/ilktanPhysioIEEETNSRE.pdf">Ilktan Ar and Yusuf Sinan Akgul , "A Computerized Recognition System for the Home-Based Physiotherapy Exercises Using an RGBD Camera", IEEE Transactions on Neural Systems and Rehabilitation Engineering, accepted 2014, DOI 10.1109/TNSRE.2014.2326254,
    
    </a></li>

</ul>