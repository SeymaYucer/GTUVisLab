Title:Operator Performance Tuned Surveillance System Using Video Summary Density
status:hidden

<h3>Operator Performance Tuned Surveillance System Using Video Summary Density</h3>
<h5> TUBITAK Project No: 110E033 </h5>

<p><br><strong>Project Team : </strong>
<a href="http://www.bilmuh.gtu.edu.tr/~uvural/">Ulas Vural </a> and <a href="http://www.bilmuh.gtu.edu.tr/~akgul/">Dr. Yusuf Sinan Akgul.</a></p>


<p>

Today's typical surveillance systems involve a large number live video feeds from many cameras distributed over public places and living areas. 
Larger number of cameras helps establish a more effective surveillance system. However, larger number of cameras also makes the surveillance 
systems more expensive and error prone because currently most of the video feeds are monitored by human operators at security centers. 
Employing human operators in video monitoring is known to be ineffective, error prone, and expensive. As a result, researchers often suggested 
developing "smart" surveillance monitoring systems that automatically detect suspicious events and people in a reliable and inexpensive manner. 
These automatic systems mostly consider doing the work of the human operator either fully or partially. Although automatic analysis of surveillance 
video research made considerable progress, the practical real world systems still have to rely on human operators to some extent in 
monitoring the videos. At the end, the current smart surveillance systems help the human operator in registering important events, making 
searches in databases, and producing surveillance reports. We believe that any practical smart surveillance systems should work seamlessly with human
 operators by providing abstract and semantically rich information to the human operators who will make the final decisions about the actions to be 
taken. In addition, the inescapable involvement of the human operators forces us to build specialized methods in smart surveillance systems.

<p>

<a class=cDL href="{filename}/pdfs/2009/vural09_eyegaze.pdf">Our recent work</a> recognized the current need for coexistence of human operators with smart surveillance systems. We built a surveillance system 
that tracks the eye movements and eye gaze positions of the human operators. The tracked eye gaze positions are compared against the motion displayed
 on the surveillance monitors to see if the operators are registering the movements. As a result of this analysis, we can produce <a class=cDL href="{filename}/pdfs/2008/yildiz08_synopsis.pdf"> non-linear video summaries</a>
  of overlooked video sections or summaries of monitored sections. The basic assumption of the system is the error-prone nature of human
 operators who would miss some actions time to time. The summaries of the over-looked video sections would give a second chance to the human operator 
in capturing these sections. The system can use the output feeds from any smart surveillance system. The idea turned out to be very effective and it 
has captured interest from general surveillance community.

<p>

This project is based on <a class=cDL href="{filename}/pages/projects/proj05.md">our previous project</a>. We propose many new major improvements that would make the overall surveillance systems more reliable
 and less expensive. Our new system assumes that the number of surveillance feeds is much larger than number of human operators to keep the surveillance 
system costs down. In order to address the difference between the number of video feeds and the operators, human operators should always monitor non-linear
 summaries of the live videos. The live videos are summarized in real time using our efficient graph cut based non-linear video summarization method. 

<p>&nbsp;<p>&nbsp;
<img src="{filename}/files/proj07/fig1.jpg" width="800"></img>
<p>&nbsp;
<p>&nbsp;
Our new system captures the operator eye movements along with other metrics such as head positions and angle, eye lid closure times and frequency, and eye
 fixation and saccade durations and frequency. These metrics are used to measure the attentiveness of the operators, which will be used to change the video 
summary density of the input feeds. If the operator is decided to be attentive, then the video density rate can be increased, otherwise the density will be 
lowered. Note that, sometimes video summary densities can be lower than the real time video density, which means that we lengthen the live videos so that the 
operator can register all movements. It is very well listed in the Human Computer Interaction literature that human performance tends to decrease at very 
low and very high cognitive loads. Keeping the cognitive loads of the human surveillance operators around the optimal levels would make our system very 
efficient in terms of using the expensive human labor. 

<p>

There are many benefits of our new approach. First, the system dynamically can invite or drop new human operators to the system depending on the system load 
because we can always measure the amount of video to be manually monitored by considering the amount of surveillance motion involved. This would make the o
verall system very efficient in terms of running expenses. In addition, this would make it possible to build security centers that monitor many different 
organizations at the same time using human operators. The busy surveillance traffic of one organization can be offset by less busy traffic of other organizations 
while the human operators are kept at their peak alertness all the time. The system can automatically produce reports on if the operators over-work or under-work. 
Overall, our new system recognizes the fact that human operators are unavoidable parts of current smart surveillance systems and hence special care should be taken 
for addressing the human fallibility and higher costs of human employees. Our new system addresses these problems at the same time on regular surveillance hardware.

<p>&nbsp;<p>&nbsp;
<strong>Publications</strong>
<ul class=cListPB10>

    <li><a 
    class=cDL href="{filename}/pdfs/2011/vural11_attBasedSurveillance.pdf">Ulas Vural and Yusuf Sinan Akgul. "Operator Attention Based Video Surveillance", The Eleventh IEEE International Workshop on Visual Surveillance, Barcelona, 2011.</a> - <a 
    class=cDL href="{filename}/files/proj07/vs11supp.rar">[Videos]</a></li>

   <li><a class=cDL href="{filename}/pdfs/2011/vural11_bookeyegaze.pdf">Ulas Vural and Yusuf Sinan Akgul, "A Parallel Non-Linear Surveillance
    Video Synopsis System with Operator Eye-Gaze Input",
    Video Surveillance, Weiyao Lin (Ed.), ISBN: 978-953-307-436-8, InTech, 2011.
    </a></li>

  <li><a class=cDL href="{filename}/pdfs/2009/vural09_eyegaze.pdf">Ulas Vural and Yusuf Sinan Akgul. "Eye-gaze Based Real-time
    Surveillance Video Synopsis", the Special Issue of Pattern Recognition Letters 
    Image/Video-based Pattern Analysis and HCI Applications,
    </a> - <a href="http://dx.doi.org/10.1016/j.patrec.2009.03.002">doi:10.1016 /j.patrec.2009.03.002.</a>
    </li>

</ul>