Compressor -> EQ? -> Chorus -> Delay -> Reverb

Chorus: 8 voice

Delay + Reverb: long and weird settings
  series or parallel?

> A compressor feeds a delay with different times per side. After the delay comes a
> 100% mixed reverb (plate) which then goes into a dual stereo chorus somewhat akin
> to a Roland Dimension, with out-of-phase LFOs to minimize the sense of wobble.

https://patchstorage.com/soft-focus-based-on-the-yamaha-instant-shoegaze-setting/


> At its heart, the Soft Focus is a heavily modified plate reverb with adjustable time, which is subsequently split into three paths. One path contains a multi-voiced chorus modulator, another features a well-appointed octave-up mixed in with the reverb, and the third path leaves the reverb untouched. The Mod knob controls the rate of the chorus on path one, and the Symphony knob controls the level of the octave on path two. All controls are "coupled" to the tone of the reverb to give users an expansive playing field of sounds to discover and fine tune. Our Soft Focus is not an exact recreation but was exhaustively
> compared with our own FX500; the difference is that a fairly generic fixed-time digital delay is present on the Soft Focus patch. We found that leaving this feature intact ate into the circuit’s memory just a little too much for such little payoff, so we leave that addition to you and your favorite delay.

https://catalinbread.com/products/soft-focus-reverb




https://github.com/jonathonracz/GoatMix/blob/master/GoatMix/Source/DSP/Compressor.h
http://openaudio.webprofusion.com/
https://github.com/juandagilc/Audio-Effects
https://github.com/highfidelity/gverb
https://github.com/SpotlightKid/ykchorus/blob/master/plugins/YKChorus/Chorus.h

> Max reverb time: 40 seconds. Have a read of the manual.
>
> The delays are OK, nothing special there. That's actually why it's hard to replicate the Soft Focus sound with plugins. There are few plugs that basic now in terms of sound. The delay and reverb are pretty average really but it's the modulation (the Symphonic effect) which provides that lovely swirl.

http://soundbelch.blogspot.com/2017/02/the-yamaha-fx500-distortion-hates-me.html


https://www.reddit.com/r/zoommultistomp/comments/8i0mcp/soft_focus_patch/

> RackComp THRSH 40 Ratio 1 Level 116 ATTCK 1
> ParaEQ Freq1 80hz Q1 8 Gain1 -5 Freq2 1.0kHz Q2 8 Gain2 1 Level 100
> HD Hall PreD 19 Decay 85 Mix 100 LoDMP 70 HiDMP 81 Tail ON
> MultiTapD Time 769 PTTRN 5 Mix 81 Tone 10 Level 100 Tail ON
> Detune Cent 20 PreD 0 Mix 75 Tone 9 Level 100

https://zoomcorp.com/media/documents/E_MS-50G_FX-list_v3.pdf

1. Compressor - fast attack, ratio=1, threshold and level to taste
2. Filter: 80Hz q=8 gain=-5db
3. Filter: 3.2KHz q=8 gain=1db
4. Hall reverb: pre-delay 19/200 (ms?) Decay 85/100 (ms?) mix 100%
5. Multitap Delay: 769/3000 (ms?), pattern 5 (who knows?), mix 81%, tone 9/10
6. Detune: +20cent, mix 75%, tone 9/10


