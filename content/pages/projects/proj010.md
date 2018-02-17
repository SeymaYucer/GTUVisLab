Title:Age Estimation from Human Face Images
status:hidden

<h3>Age Estimation from Human Face Images</h3>


<p><br><strong>Project Team : </strong>
Merve Kilinc </a> and <a href="http://www.bilmuh.gtu.edu.tr/~akgul/">Dr. Yusuf Sinan Akgul.</a></p>


<p>
Aging progress of a person is influenced by many factors such as genetics, health, lifestyle, and even weather conditions. Therefore human age estimation from face image is a challenging problem not only for the existing computer vision systems but also for humans in some circumstances . Aging causes significant variants in facial shape and texture information of human face should be used together.
<p>


<img src="{filename}/files/proj010/fig1.jpg"  style="   display: block;   margin-left: auto;   margin-right: auto; " />


<p>
The proposed age estimation that uses a number of overlapping age groups and  classifiers that combine geometrical and textural facial features of the human face to represent the variants that aging causes. The system mainly consists of two phases: training phase and testing phase. In the training phase, face images in the training set are assigned to non-uniformly formed overlapping age group labels. Then several facial feature extraction methods (Geometric feature extraction process is given in Figure 1) are applied to the preprocessed face images in the training set. Finally, age classifiers are modelled by using the extracted feature vectors. 

</p>

<p>
In the testing phase, age classifiers are used to assign probabilities of the tested face image belonging to each group. The interpolation of the classifier probabilities produces the final estimated age. The overall diagram of the proposed age estimation system is shown in Figure 2. Comparative results of different kinds of features show that, the lowest Mean Absolute Error of age estimation is obtained using the fusion of Local Gabor Binary Pattern operator and Geometric features.

</p>
<img src="{filename}/files/proj010/fig2.jpg"  style="   display: block;   margin-left: auto;   margin-right: auto; " />





<p>&nbsp;<p>&nbsp;
<strong>Publications</strong>
<ul class=cListPB10>

	<li> <a 
    class=cDL href="/publications/2012/merve_HumanAgeEstimationviaGeometricandTexturalFeatures.pdf">Merve Kilinc and Yusuf Sinan Akgul. "Human Age Estimation Via Geometric And Textural Features", The International Conference on Computer Vision Theory and Applications (VISAPP), Rome, February 2012.</a></li>

</ul>