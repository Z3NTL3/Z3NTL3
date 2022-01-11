# About Me
<!-- HTML generated using hilite.me --><div style="background: #272822; overflow:auto;width:auto;border:solid gray;border-width:.1em .1em .1em .8em;padding:.2em .6em;"><pre style="margin: 0; line-height: 125%"><span style="color: #f92672">import</span> <span style="color: #f8f8f2">multiprocessing</span>
<span style="color: #f92672">import</span> <span style="color: #f8f8f2">sys</span>

<span style="color: #f8f8f2">gay</span> <span style="color: #f92672">=</span> <span style="color: #f8f8f2">False</span>
<span style="color: #66d9ef">class</span> <span style="color: #a6e22e">Z3NTL3</span><span style="color: #f8f8f2">:</span>
    <span style="color: #66d9ef">def</span> <span style="color: #a6e22e">__init__</span><span style="color: #f8f8f2">(self,</span> <span style="color: #f8f8f2">WakeUp,</span> <span style="color: #f8f8f2">Eat,</span> <span style="color: #f8f8f2">DoGym,</span> <span style="color: #f8f8f2">Program,</span> <span style="color: #f8f8f2">Sleep):</span>
        <span style="color: #f8f8f2">self</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">wakeup</span> <span style="color: #f92672">=</span> <span style="color: #f8f8f2">WakeUp</span>
        <span style="color: #f8f8f2">self</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">eat</span> <span style="color: #f92672">=</span> <span style="color: #f8f8f2">Eat</span>
        <span style="color: #f8f8f2">self</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">dogym</span> <span style="color: #f92672">=</span> <span style="color: #f8f8f2">DoGym</span>
        <span style="color: #f8f8f2">self</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">program</span> <span style="color: #f92672">=</span> <span style="color: #f8f8f2">Program</span>
        <span style="color: #f8f8f2">self</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">sleep</span> <span style="color: #f92672">=</span> <span style="color: #f8f8f2">Sleep</span>       
    <span style="color: #66d9ef">def</span> <span style="color: #a6e22e">kill</span><span style="color: #f8f8f2">():</span>
        <span style="color: #f8f8f2">sys</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">exit(</span><span style="color: #e6db74">&#39;being gay&#39;</span><span style="color: #f8f8f2">)</span>
    <span style="color: #66d9ef">def</span> <span style="color: #a6e22e">myWholeDay</span><span style="color: #f8f8f2">(self):</span>
        <span style="color: #66d9ef">global</span> <span style="color: #f8f8f2">gay</span>
        <span style="color: #f8f8f2">gay</span> <span style="color: #f92672">=</span> <span style="color: #f8f8f2">True</span>
        <span style="color: #66d9ef">while</span> <span style="color: #f8f8f2">True:</span>
            <span style="color: #66d9ef">try</span><span style="color: #f8f8f2">:</span>
                <span style="color: #66d9ef">print</span><span style="color: #f8f8f2">(f</span><span style="color: #e6db74">&quot;&quot;&quot;24 Hours includin repeat:</span><span style="color: #ae81ff">\n</span><span style="color: #e6db74">{self.wakeup} | {self.eat} | {self.dogym} | {self.program} | {self.sleep}&quot;&quot;&quot;</span><span style="color: #f8f8f2">)</span>
                <span style="color: #66d9ef">if</span> <span style="color: #f8f8f2">gay</span> <span style="color: #f92672">==</span> <span style="color: #f8f8f2">True:</span> 
                    <span style="color: #f8f8f2">z3ntl3</span> <span style="color: #f92672">=</span> <span style="color: #f8f8f2">multiprocessing</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">Process(target</span><span style="color: #f92672">=</span><span style="color: #f8f8f2">Z3NTL3</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">kill())</span>
                    <span style="color: #66d9ef">print</span><span style="color: #f8f8f2">(</span><span style="color: #e6db74">&quot;Go away f*cking gay terminatin you&quot;</span><span style="color: #f8f8f2">)</span>
                    <span style="color: #f8f8f2">z3ntl3</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">start()</span>
                    <span style="color: #f8f8f2">z3ntl3</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">join()</span>
                <span style="color: #66d9ef">else</span><span style="color: #f8f8f2">:</span>
                    <span style="color: #66d9ef">pass</span>
            <span style="color: #66d9ef">except</span><span style="color: #f8f8f2">:</span>
                <span style="color: #66d9ef">print</span><span style="color: #f8f8f2">(</span><span style="color: #e6db74">&quot;day restartin b*tch&quot;</span><span style="color: #f8f8f2">)</span>
<span style="color: #66d9ef">if</span> <span style="color: #f8f8f2">__name__</span> <span style="color: #f92672">==</span> <span style="color: #e6db74">&#39;__main__&#39;</span><span style="color: #f8f8f2">:</span>
    <span style="color: #f8f8f2">fcker</span> <span style="color: #f92672">=</span> <span style="color: #f8f8f2">Z3NTL3(</span><span style="color: #e6db74">&#39;WakeUp&#39;</span><span style="color: #f8f8f2">,</span> <span style="color: #e6db74">&#39;Eat&#39;</span><span style="color: #f8f8f2">,</span> <span style="color: #e6db74">&#39;DoGym&#39;</span><span style="color: #f8f8f2">,</span> <span style="color: #e6db74">&#39;Program&#39;</span><span style="color: #f8f8f2">,</span> <span style="color: #e6db74">&#39;Sleep&#39;</span><span style="color: #f8f8f2">)</span>
    <span style="color: #f8f8f2">fcker</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">myWholeDay()</span>
</pre></div>
