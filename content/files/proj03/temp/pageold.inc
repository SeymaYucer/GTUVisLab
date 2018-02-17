<h3>Statistical Significance Analysis for Computer Vision Tasks</h3>

<p>Most computer vision problems are ill posed whose solution is not unique or 
does not exist or is not stable under perturbations on data. Correspondence, 
edge detection etc. We presented a method which selects the statistically 
significant solution among other solutions for ill posed problem. If the 
quality of the solutions are measured, it would be possible to compare them 
with each other. We are measuring the quality of the solutions using 
nonparametric statistical tests. <u>Statistical significance</u> is a 
probability value which is a measurement whether the outcome can happen 
accidentally or not. This term can be a measure for the quality of the 
solutions of ill posed problems.</p>

<div id=dP3Fig2>
    <center>
        <img src="projects/proj03/fig2.gif">
        <p class=cFigText><b>Figure 2</b> Probability distribution for SAD metric. 
        Observed statistic shows the cost of matrices (99).</p>
    </center>
</div>

    <p>For example we want to know the statistical significant of similarity cost 
    of matrices in Figure 1.</p>
    
<div>
    <center>
        <img src="projects/proj03/fig1.png" />
        <p class=cFigText id=pP3Fig1><b>Figure 1</b></p>
    </center>
</div>

<p>SAD cost for the matrices is 99. How likely is it to have the same 
correspondence result by accident? Proposed method answer this question by 
measuring the statistical significant of the cost.</p>

<p>The measurement of the statistical significance is the <b>p-value</b>. It 
shows the probability of observance of the result among all other situations. 
To calculate the p values, the probability distribution (pdf) which the 
observance result was drawn should be known. To answer the above question, we 
build the pdf of SAD metric (Figure 2) . The cumulative distribution which can 
be calculated from the pdf gives the p-values of the observed cost.</p>

<p id=pP3Eq1>p-value = <span id=sP3Eq1>cdf</span> ( observed statistic )</p>

<p>We choose the stereo correspondence problem as the initial test bed 
environment. We first compared solutions for the intensity differences metrics 
( Sum of Absolute Differences-SAD, Sum of Squared Differences-SSD ).</p>

<div id=dP3Fig3>
    <div id=dP3Fig3Left>
        <center>
            <img src="projects/proj03/fig3_left.jpg" />
            <p class=cFigText>Left image</p>
        </center>
    </div>
    
    <div>
        <center>
            <img src="projects/proj03/fig3_right.jpg" />
            <p class=cFigText>Right image</p>
        </center>
    </div>
</div>

<p>Stereo algorithm makes a search in the right image to find which block is 
most similar in the left image. For the red block in the left image, SAD find 
blue block and SSD find red block.</p>

<p>We measure quality of costs both for SAD and SSD, then select the 
statistically more meaningful metric for that block. We continue this process 
for all pixel block in the left image.</p>

<p>We validated our claims using stereo test data with ground truth. First we 
calculate disparity maps for each image using fixed similarity metric (just 
SAD or SSD) and compared the results with the ground truth. Then we run 
proposed method, selecting the statistically significant metric for each local 
block. Table 1 shows the number of incorrect matches for fixed similarity 
metrics, and combined similarity metric. We summarized the results, for more 
result and detailed information please read our conference paper,
<a class=cDL href="publications/2007/scandemir07_nonparametric.pdf">A Nonparametric
Statistical Approach for Stereo Correspondence, ISCIS07</a>.</p>

<center>
    <img src="projects/proj03/table1.png" />
    <p class=cFigText><b>Table 1</b></p>
</center>

<p>Table 2 shows the average errors calculated from all the experiments. As it 
can be seen, proposed method performs better than the fixed metric usage.</p>

<center>
    <img src="projects/proj03/table2.png" />
    <p class=cFigText><b>Table 2</b></p>
</center>

<p>We also applied the method to adaptive window stereo correspondence. We 
measure the quality of cost of different window sizes for each local block. We 
calculate the probability distribution for w<sub>i</sub> by w<sub>i</sub> 
window sizes, i = 3,5,7, etc. Then for each local block, we calculate p-values 
which shows us the quality of that window size for that block. We select the 
most statistically significant window size for each local block. We test the 
method using ground truth values. We calculate disparity maps using fixed 
window size and using proposed method. Then compared the disparity maps with 
ground truth. Table 3 shows the number of incorrect matches for fixed window 
sized and proposed method (W5 means fixed window size 5 by 5). We summarized 
our result, for more result and information, please mail
<a href="mailto:scandemir {at} bilmuh.gyte.edu.tr">me</a>.</p>

<center>
    <img src="projects/proj03/table3.png" />
    <p class=cFigText><b>Table 3</b></p>
</center>
