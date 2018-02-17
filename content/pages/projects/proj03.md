Title: Statistical Significance Analysis for Computer Vision Tasks
status:hidden


<p>Title: Statistical Significance Analysis for Computer Vision Tasks</p>
<div>
<h3>Statistical Significance Analysis for Computer Vision Tasks</h3>
<p><br /><strong>Project Team :</strong><a href="http://www.bilmuh.gtu.edu.tr/~scandemir/">Sema Candemir</a> and <a href="http://www.bilmuh.gtu.edu.tr/~akgul/">Dr. Yusuf Sinan Akgul.</a></p>
<p>Most computer vision problems are ill posed whose solution is not unique or does not exist or is not stable under perturbations on data. We presented a method which selects the statistically significant solution among other solutions. The method constricts the solution space of the problem by significance concept.</p>
<p>If the quality of the solutions are measured, it would be possible to compare them with each other. We are measuring the quality of the solutions using nonparametric statistical tests. <u>Statistical significance</u> is a probability value which is a measurement whether the outcome can happen accidentally or not. This term can be a measure for the quality of the solutions of ill posed problems. The measurement of the statistical significance is the <strong>p-value</strong>. It shows the probability of observance of the result among all other situations. To calculate the p values, the probability distribution (pdf) which the observance result was drawn should be known.The cumulative distribution which can be calculated from the pdf gives the p-values of the observed cost.</p>
<p>p-value = <strong><em>cdf</em></strong> ( observed statistic )</p>
<p>We choose the metric fusion as the initial test bed enviroment. We have combined the most popular stereo metrics (Sum of Absolute Differences, Sum of Squared Distance and Normalized Cross Correlation) to obtain better depth maps. The problem of the metric fusion is scale differences in metrics. Popular score normalization methos in information fusion are useless because of the differences in metric distributions.</p>
<table border="0" cellspacing="0" cellpadding="0">
<tbody>
<tr>
<td width="364">
<p><img src="{filename}/files/proj03/proje03_files/image002.gif" alt="" width="348" height="221" /></p>
<p>SAD distribution fits Weibull distribution with parameters</p>
<p> &alpha;=4,1 &beta;=109,1 &gamma;=109,2</p>
</td>
<td width="364">
<p><img src="{filename}/files/proj03/proje03_files/image004.gif" alt="" width="356" height="222" /></p>
<p>SAD distribution fits Weibull distribution with parameters</p>
<p>&alpha;=3,7 &beta;=1957,4 &gamma;=837,6</p>
</td>
</tr>
</tbody>
</table>
<p>We have measured the quality of each cost for each metric and expressed them as p-values. Then we have selected the statistically more meaningful one for the correspondence procedure. <strong>The method behaves as nonparametric normalization technique for the costs from different distributions.</strong> We validated our claims using stereo test data with ground truth. First we calculate disparity maps for each image using fixed similarity metric (just SAD or SSD) and compared the results with the ground truth. Then we run proposed method, selecting the statistically significant metric for each local block. Table 1 shows the number of incorrect matches for fixed similarity metrics, and combined similarity metric. We summarized the results, for more result and detailed information please read our conference paper, <a href="{filename}/pdfs/2007/scandemir07_nonparametric.pdf"><strong>A Nonparametric Statistical Approach for Stereo Correspondence, ISCIS07</strong></a>.</p>
<p><img src="{filename}/files/proj03/proje03_files/image006.gif" alt="" width="583" height="219" border="0" /></p>
<p>Table 1</p>
<p>We also applied the method to adaptive window stereo correspondence. We measure the quality of cost of different window sizes for each local block. We calculate the probability distribution for w<sub>i</sub> by w<sub>i</sub> window sizes, i = 3,5,7, etc. Then for each local block, we calculate p-values which shows us the quality of that window size for that block. We select the most statistically significant window size for each local block. We test the method using ground truth values. We calculate disparity maps using fixed window size and using proposed method. Then compared the disparity maps with ground truth.</p>
<p><img src="{filename}/files/proj03/proje03_files/image008.gif" alt="" width="517" height="210" border="0" /></p>
<p>Now we are working on fusing data and smoothness costs using our method. The quality of each cost are measured and expressed as p-values. We expected to achieve more statistically significant results.</p>
<p><img src="{filename}/files/proj03/proje03_files/image010.gif" alt="" width="168" height="114" border="0" /><img src="{filename}/files/proj03/proje03_files/image012.gif" alt="" width="172" height="115" border="0" /><img src="{filename}/files/proj03/proje03_files/image014.gif" alt="" width="169" height="112" border="0" /><img src="{filename}/files/proj03/proje03_files/image016.gif" alt="" width="167" height="111" border="0" /></p>
<p><img src="{filename}/files/proj03/proje03_files/image017.gif" alt="" width="194" height="123" /><img src="{filename}/files/proj03/proje03_files/image018.gif" alt="" width="171" height="123" /><img src="{filename}/files/proj03/proje03_files/image020.gif" alt="" width="163" height="110" border="0" /><img src="{filename}/files/proj03/proje03_files/image022.gif" alt="" width="166" height="111" border="0" /><img src="{filename}/files/proj03/proje03_files/image024.gif" alt="" width="166" height="110" border="0" /><img src="{filename}/files/proj03/proje03_files/image026.gif" alt="" width="174" height="118" border="0" /></p>
<p>Segmentation results with different relative weights between data and smoothness costs. The one in red square is the best segmentation results with suitable relative weight. The result in blue square shows the better segmentation results using our method.</p>
<strong>Publications</strong>
<ul>
<li><a href="{filename}/pdfs/2010/candemir10_statistical.pdf">Sema Candemir, Yusuf Sinan Akgul, "Statistical Significance Based Graph Cut Regularization for Medical Image Segmentation", Turkish Journal Of Electrical Engineering &amp; Computer Sciences, In Press </a></li>
<li>Sema Candemir and Yusuf Akgul, "Statistical Significance Based Graph Cut Segmentation for Shrinking Bias", Int.Conf. on Image Analysis and Recognition, 2011, accepted. <a href="{filename}/pdfs/2011/candemir11_graphcut.pdf"></a></li>
<li><a href="{filename}/pdfs/2010/candemir10_adaptive.pdf">Sema Candemir, Yusuf Sinan Akgul: Adaptive Regularization Parameter for Graph Cut Segmentation. ICIAR (1) 2010: 117-126 </a></li>
<li><a href="{filename}/pdfs/2007/scandemir07_nonparametric.pdf">Sema Candemir and Yusuf Sinan Akgul. "A Nonparametric Statistical Approach for Stereo Correspondence", International Symposium on Computer and Information Sciences, 2007. </a><a href="{filename}/pdfs/posters/2007/Nonparametric_ODTU.pdf">[Poster (.pdf)]</a></li>
</ul>
</div>