/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTracePlayerTimelineStream : NSObject {
    NSArray * _data;
    <MNTracePlayerTimelineStreamDelegate> * _delegate;
    id /* block */  _handler;
    unsigned int  _lastReportedIndex;
    unsigned int  _nextIndex;
    double  _timeUntilNextUpdate;
    NSTimer * _timer;
    NSString * _timestampKey;
}

@property (nonatomic) <MNTracePlayerTimelineStreamDelegate> *delegate;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, readonly) unsigned int lastReportedIndex;
@property (nonatomic, readonly) unsigned int nextIndex;

- (void).cxx_destruct;
- (void)_timerFired;
- (id)delegate;
- (id /* block */)handler;
- (id)initWithData:(id)arg1 timestampKey:(id)arg2;
- (unsigned int)lastReportedIndex;
- (unsigned int)nextIndex;
- (void)scheduleUpdateFromCurrentTime:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)stop;

@end
