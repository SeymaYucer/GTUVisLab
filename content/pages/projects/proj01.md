Title:A Computer Vision Method For Recovering 3D Structure of Objects Using Dual Meshes
status:hidden

<h3>A Computer Vision Method For Recovering 3D Structure<br/>Of Objects Using Dual Meshes</h3>
<p><strong>TUBITAK Career Project 105E097</strong> [2006 - 2009]</p>
<p><br/><strong>Project Team : </strong>Tarkan Aydin, <a href="http://www.bilmuh.gtu.edu.tr/~uvural/">Ulas Vural</a> and <a href="http://www.bilmuh.gtu.edu.tr/~akgul/">Dr. Yusuf Sinan Akgul.</a></p>
<p>The aim of this project is to recover the 3D structure of objects via dual meshes. The dual meshes method was first proposed by Akgul and Kambhamuttu in 1999. The method was successfully applied to the biomedical video analysis. In this project, a combination of diffrent techniques such as stereo, focus and defocus is going to be used in a dual meshes framework.</p>
<p>The system uses two separate optimization processes for the recovery of 3D surfaces with depth discontinuities and occlusions. The optimization processes are based on gradient descent heuristics, which do not guarantee optimality. However, due to the interaction between the optimization processes, the overall result of our system is always better than the results achievable by a single optimization process. The presented idea is applicable to other heuristic optimization methods that use a global approach.</p>
<p>The synchronous optimization processes was formulated by introducing E<sub>tns</sub> term. This energy functional will produce two minimal cost disparity surface D1 and D2 from two separate but dependent optimizations.</p>
<p><img src="{filename}/files/proj01/equation.jpg"/></p>
<p>These disparity surface constructed by assigning a disparity value for each element in the left image of the stereo pair.</p>
<div>
<p><img src="{filename}/files/proj01/dm_evolution.jpg"/></p>
<p>Fig 1. Synchronous evolution of processes for baseball image (Fig.2). (a) Initial state of processes. One is started from minimum disparity values and the other is stared from maximum disparity values. (b-d) The processes are evolving to recover the same surface. (e) The final state of the processes. Both recovered the same surface.</p>
</div>
<p>We are currently working on elimination of the surface continuity constraint by developing a novel regularization method based on diffusion process. The handling of the discontinuities and occlusions are done by using diffusive-like regularization mechanism in which flow contributions are adjusted by the segment information and the temporal positions of the processes.</p>
<div>
<p><img src="{filename}/files/proj01/baseball.jpg"/></p>
<p>Fig 2. Initial result of synchronous optimization process with segment based regularization method, (a) Left image of baseball stereo pairs. (b) Computed depth map (c) synthesized view. Depth discontinuities are recovered well.</p>
</div>
<div>
<table>
<tbody>
<tr>
<td>
<div><img src="{filename}/files/proj01/venus.jpg"/>
<p>Venus</p>
</div>
</td>
<td>
<div><img src="{filename}/files/proj01/teddy.jpg"/>
<p>Teddy</p>
</div>
</td>
<td>
<div><img src="{filename}/files/proj01/cones.jpg"/>
<p>Cones</p>
</div>
</td>
</tr>
</tbody>
</table>
<p>Fig 3. Depth maps computed by our new approach for middlebury data sets.</p>
</div>
<p><strong>/pdfs</strong></p>
<ul>
<li><a href="{filename}/pdfs/2010/aydin10_focus.pdf">Aydin T and Akgul YS, "Stereo Depth Estimation Using Synchronous Optimization with Segment Based Regularization", Pattern Recognition Letters, DOI:10.1016/j.patrec.2010.07.012, In press <a href="{filename}/pdfs/2010/aydin10_stereo.pdf"></a></li>
<li>Aydin T and Akgul YS "An occlusion insensitive adaptive focus measurement method", Optics Express, Volume: 18 Issue: 13 Pages: 14212-14224 Published: JUN 21 2010. </a></li>
<li> <a href="{filename}/pdfs/2009/aydin09_stereo.pdf">Tarkan Aydin and Yusuf Sinan Akgul. "A Stereo Depth Recovery Method Using Layered Representation of the Scene", The German Association for Pattern Recognition, 2009.</a></li>
<li><a href="{filename}/pdfs/2008/aydin08_adafocus.pdf">Tarkan Aydin and Yusuf Sinan Akgul. "A New Adaptive Focus Measure for Shape From Focus", British Machine Vision Conference, 2008. </a></li>
<li><a href="{filename}/pdfs/2006/aydin06_syncstereo.pdf">Tarkan Aydin and Yusuf Sinan Akgul. "3D Structure Recovery From Stereo Using Synchronous Optimization Processes", British Machine Vision Conference, 2006.</a></li>
<li><a href="{filename}/pdfs/2006/vural06_gcstereo.pdf">Ulas Vural and Yusuf Sinan Akgul. "A Multiple Graph Cut Based Approach For Stereo Analysis", The German Association for Pattern Recognition, 2006. (<strong>Lecture Notes In Computer Science, 2006, Vol 4174</strong>) </a></li>
<li><a href="{filename}/pdfs/theses/ulasVural_ms_thesis.pdf">[<strong>Turkish</strong>] Ulas Vural. "Recovery of 3D Structure Using Deformable Surfaces", MS Thesis, GIT, 2006. </a></li>
</ul>