/* ==================================== JUCER_BINARY_RESOURCE ====================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#include <cstring>

namespace BinaryData
{

//================== notes.md ==================
static const unsigned char temp_binary_data_0[] =
"Compressor -> EQ? -> Chorus -> Delay -> Reverb\n"
"\n"
"Chorus: 8 voice\n"
"\n"
"Delay + Reverb: long and weird settings\n"
"  series or parallel?\n"
"\n"
"> A compressor feeds a delay with different times per side. After the delay comes a\n"
"> 100% mixed reverb (plate) which then goes into a dual stereo chorus somewhat akin\n"
"> to a Roland Dimension, with out-of-phase LFOs to minimize the sense of wobble.\n"
"\n"
"https://patchstorage.com/soft-focus-based-on-the-yamaha-instant-shoegaze-setting/\n"
"\n"
"\n"
"> At its heart, the Soft Focus is a heavily modified plate reverb with adjustable time, which is subsequently split into three paths. One path contains a multi-voiced chorus modulator, another features a well-appointed octave-up mixed in with the rev"
"erb, and the third path leaves the reverb untouched. The Mod knob controls the rate of the chorus on path one, and the Symphony knob controls the level of the octave on path two. All controls are \"coupled\" to the tone of the reverb to give users an"
" expansive playing field of sounds to discover and fine tune. Our Soft Focus is not an exact recreation but was exhaustively\n"
"> compared with our own FX500; the difference is that a fairly generic fixed-time digital delay is present on the Soft Focus patch. We found that leaving this feature intact ate into the circuit\xe2\x80\x99s memory just a little too much for such lit"
"tle payoff, so we leave that addition to you and your favorite delay.\n"
"\n"
"https://catalinbread.com/products/soft-focus-reverb\n"
"\n"
"\n"
"\n"
"\n"
"https://github.com/jonathonracz/GoatMix/blob/master/GoatMix/Source/DSP/Compressor.h\n"
"http://openaudio.webprofusion.com/\n"
"https://github.com/juandagilc/Audio-Effects\n"
"https://github.com/highfidelity/gverb\n"
"https://github.com/SpotlightKid/ykchorus/blob/master/plugins/YKChorus/Chorus.h\n"
"\n"
"> Max reverb time: 40 seconds. Have a read of the manual.\n"
">\n"
"> The delays are OK, nothing special there. That's actually why it's hard to replicate the Soft Focus sound with plugins. There are few plugs that basic now in terms of sound. The delay and reverb are pretty average really but it's the modulation (th"
"e Symphonic effect) which provides that lovely swirl.\n"
"\n"
"http://soundbelch.blogspot.com/2017/02/the-yamaha-fx500-distortion-hates-me.html\n"
"\n"
"\n"
"https://www.reddit.com/r/zoommultistomp/comments/8i0mcp/soft_focus_patch/\n"
"\n"
"> RackComp THRSH 40 Ratio 1 Level 116 ATTCK 1\n"
"> ParaEQ Freq1 80hz Q1 8 Gain1 -5 Freq2 1.0kHz Q2 8 Gain2 1 Level 100\n"
"> HD Hall PreD 19 Decay 85 Mix 100 LoDMP 70 HiDMP 81 Tail ON\n"
"> MultiTapD Time 769 PTTRN 5 Mix 81 Tone 10 Level 100 Tail ON\n"
"> Detune Cent 20 PreD 0 Mix 75 Tone 9 Level 100\n"
"\n"
"https://zoomcorp.com/media/documents/E_MS-50G_FX-list_v3.pdf\n"
"\n"
"1. Compressor - fast attack, ratio=1, threshold and level to taste\n"
"2. Filter: 80Hz q=8 gain=-5db\n"
"3. Filter: 3.2KHz q=8 gain=1db\n"
"4. Hall reverb: pre-delay 19/200 (ms?) Decay 85/100 (ms?) mix 100%\n"
"5. Multitap Delay: 769/3000 (ms?), pattern 5 (who knows?), mix 81%, tone 9/10\n"
"6. Detune: +20cent, mix 75%, tone 9/10\n"
"\n"
"\n";

const char* notes_md = (const char*) temp_binary_data_0;


const char* getNamedResource (const char* resourceNameUTF8, int& numBytes);
const char* getNamedResource (const char* resourceNameUTF8, int& numBytes)
{
    unsigned int hash = 0;

    if (resourceNameUTF8 != nullptr)
        while (*resourceNameUTF8 != 0)
            hash = 31 * hash + (unsigned int) *resourceNameUTF8++;

    switch (hash)
    {
        case 0x5e4c1fd5:  numBytes = 2921; return notes_md;
        default: break;
    }

    numBytes = 0;
    return nullptr;
}

const char* namedResourceList[] =
{
    "notes_md"
};

const char* originalFilenames[] =
{
    "notes.md"
};

const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8);
const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8)
{
    for (unsigned int i = 0; i < (sizeof (namedResourceList) / sizeof (namedResourceList[0])); ++i)
        if (strcmp (namedResourceList[i], resourceNameUTF8) == 0)
            return originalFilenames[i];

    return nullptr;
}

}
