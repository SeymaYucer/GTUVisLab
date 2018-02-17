Title:LUMBAR MRI DATASET
status:hidden
<h4>LUMBAR MRI DATASET</h4>
<p>This dataset includes T1-weighted and T2-weighted mid-sagittal MR images of 80 subjects. Each mid-sagittal view contains 5 lumbar vertebrae and 6 lumbar intervertebral discs. These images also include a number of sacrum and thoracic vertebrae and intervertebral discs. An example mid-sagittal view of MR image is shown below.</p>

<img id=iP2Fig1 src="{filename}/files/lumbarmri/image001.gif" /> 


<h5>Data Description</h5>
<p>Dataset can be downloaded from <a class=cDL href="https://www.dropbox.com/s/s0broq6rkq86nlo/dataset.zip"> here.</a></p>
<p>The dataset includes 3 folders:</p>

<ul> 
<li>mat-data</li>
<li>expert</li>
<li>our_results applications</li>
</ul>
 <p> The folder named “mat_data” contains the MR image data. Each image file is named as "s_y.mat". 
 s={1,2,…,80} shows the number of the anonymous subject and y={T1,T2} shows whether the file is T1-weighted or T2-weighted MR image.
 The folder “expert” contains the expert delineations of the lumbar vertebra and disc centers. There are 80 files named “s.mat” where s={1,2,…,80} is the number of the anonymous subject. 
 The centers marked by the expert are in a two dimensional array. The first column is the x coordinates of the lumbar structure and second column is the y coordinates of the lumbar structures. The array holds these points: </p>
 
		[x_point_of_T12_L1 y_point_of_T12_L1
		 x_point_of_L1 y_point_of_L1
		 x_point_of_L1_L2 y_point_of_L1_L2
		 x_point_of_L2 y_point_of_L2
		 x_point_of_L2_L3 y_point_of_L2_L3
		 x_point_of_L3 y_point_of_L3
		 x_point_of_L3_L4 y_point_of_L3_L4
		 x_point_of_L4 y_point_of_L4
		 x_point_of_L4_L5 y_point_of_L4_L5
		 x_point_of_L5 y_point_of_L5
		 x_point_of_L5_S1 y_point_of_L5_S1]
		
		 
 
<p>The folder “our_results” includes the final labeling results of our system. File “results.mat” includes final center point coordinates of the subject indexed as s={1,2,…,80}. The coordinates are hold in a two dimensional array like expert delineations beginning from the L0_L1 disk and ending in L5_S1 disc.
</p>
<p>The Matlab code “visualize.m” shows the MR image and marks the expert delineated centers and our final system’s centers.
 
The size of the data set is 44 MB.
 
The files have .mat extension and they can be used after being imported to Matlab.
 
If you have questions regarding the dataset you may contact with
 
                    abetul.oktay@medeniyet.edu.tr

</p>
<strong>To cite Lumbar MRI Dataset</strong>
<ul class=cListPB10>

<li>A.B. Oktay and Y.S. Akgul, "Simultaneous Localization of Lumbar Vertebrae and Intervertebral Discs with SVM based MRF”, IEEE Transactions on Biomedical Engineering, 2013 (accepted).</li>
 
<li> A.B. Oktay and Y.S.Akgul, “Localization of the Lumbar Discs Using Machine Learning and Exact Probabilistic Inference”, in Proceedings of the 14th Medical Image Computing and Computer-Assisted Intervention, Volume Part III, ser. MICCAI 2011, Berlin, Heidelberg: Springer-Verlag, 2011, pp. 158-165.</li>
</ul>




