/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWAudioSourceNode : BWSourceNode {
    struct opaqueCMSession { } * _CMSession;
    struct __CFString { } * _CMSessionAudioMode;
    struct opaqueCMSimpleQueue { } * _activeBuffersQueue;
    long long  _auRenderCount;
    unsigned long  _auSubType;
    int  _audioLevelUnits;
    struct OpaqueAudioComponentInstance { } * _audioUnit;
    struct { 
        unsigned int val[8]; 
    }  _clientAuditToken;
    BOOL  _clientAuditTokenIsValid;
    int  _clientPID;
    struct OpaqueCMClock { } * _clock;
    BOOL  _configuresSession;
    struct TimestampedAudioBufferList { 
        struct __CFAllocator {} *allocator; 
        long long auRenderCount; 
        unsigned int dataBytesCapacity; 
        unsigned int numFrames; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } pts; 
        struct AudioBufferList {} *abl; 
        unsigned int numPrependedSilenceFrames; 
    }  _currentSilenceBuffer;
    BOOL  _didBeginInterruption;
    BOOL  _doEndInterruption;
    struct opaqueCMFormatDescription { } * _formatDescription;
    NSObject<OS_dispatch_queue> * _generateSamplesDispatchQueue;
    struct opaqueCMSimpleQueue { } * _inactiveBuffersQueue;
    BOOL  _isAppAudioSession;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _latencyOffset;
    BOOL  _levelMeteringEnabled;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _nextExpectedSampleTime;
    unsigned int  _pullDuration;
    struct opaqueCMSimpleQueue { } * _renderProcErrorQueue;
    BOOL  _selectsMicForFrontCamera;
    long long  _silenceFramesGeneratedSinceLastAURenderProc;
    NSObject<OS_dispatch_source> * _silenceTimer;
    BOOL  _streamInterrupted;
    BOOL  _streamStarted;
    BOOL  _supportsNonStandardAudioSourceSampleRates;
    BOOL  _useDecoupledIO;
}

@property (nonatomic, readonly) NSArray *audioLevels;
@property (nonatomic, readonly) BOOL didBeginInterruption;
@property (nonatomic) BOOL interrupted;

+ (double)_desiredSampleRate;
+ (id)audioSourceNodeWithAttributes:(id)arg1 clock:(struct OpaqueCMClock { }*)arg2 CMSession:(struct opaqueCMSession { }*)arg3 configureSession:(BOOL)arg4 doEndInterruption:(BOOL)arg5 clientToken:(id)arg6 clientPID:(int)arg7 clientVersionOfLinkedSDK:(unsigned int)arg8;
+ (void)initialize;

- (struct __CFString { }*)CMSessionAudioMode;
- (unsigned int)_audioCombinedLatency;
- (BOOL)_cmSessionBooleanPropertyIsTrue:(struct __CFString { }*)arg1;
- (long)_configureCMSessionWithDefaultHardwareSampleRate:(double)arg1 didCallDoNotNotifyOtherSessionsOnNextInactive:(BOOL*)arg2;
- (struct opaqueCMSampleBuffer { }*)_createSampleBufferForTimestampedAudioBufferList:(struct TimestampedAudioBufferList { struct __CFAllocator {} *x1; long long x2; unsigned int x3; unsigned int x4; struct { long long x_5_1_1; int x_5_1_2; unsigned int x_5_1_3; long long x_5_1_4; } x5; struct AudioBufferList {} *x6; unsigned int x7; }*)arg1;
- (long)_deactivateCMSessionIfNecessary:(BOOL*)arg1;
- (long)_generatePullBuffers;
- (void)_generateSamples;
- (void)_generateSilenceIfNeeded;
- (long)_getAudioDevicePullFrames:(unsigned int*)arg1;
- (id)_initWithAttributes:(id)arg1 clock:(struct OpaqueCMClock { }*)arg2 CMSession:(struct opaqueCMSession { }*)arg3 configureSession:(BOOL)arg4 doEndInterruption:(BOOL)arg5 clientToken:(id)arg6 clientPID:(int)arg7 clientVersionOfLinkedSDK:(unsigned int)arg8;
- (long)_selectMicForAudioRoute:(id)arg1;
- (long)_setCMSessionAudioModeAndSelectMic:(BOOL*)arg1;
- (long)_setCMSessionPropertyWithKey:(struct __CFString { }*)arg1 value:(void*)arg2;
- (long)_setupAudioUnit;
- (long)_updatePullFormatDescription;
- (id)audioLevels;
- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (BOOL)didBeginInterruption;
- (BOOL)hasNonLiveConfigurationChanges;
- (BOOL)interrupted;
- (BOOL)levelMeteringEnabled;
- (void)makeCurrentConfigurationLive;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (BOOL)selectsMicForFrontCamera;
- (void)setCMSessionAudioMode:(struct __CFString { }*)arg1;
- (void)setInterrupted:(BOOL)arg1;
- (void)setLevelMeteringEnabled:(BOOL)arg1;
- (void)setSelectsMicForFrontCamera:(BOOL)arg1;
- (BOOL)start:(id*)arg1;
- (BOOL)stop:(id*)arg1;

@end
