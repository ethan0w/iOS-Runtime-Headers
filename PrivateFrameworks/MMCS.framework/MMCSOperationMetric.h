/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
 */

@interface MMCSOperationMetric : NSObject <MMCSOperationMetric> {
    unsigned int  _bytesDownloaded;
    unsigned int  _bytesUploaded;
    unsigned int  _connections;
    unsigned int  _connectionsCreated;
    double  _duration;
    double  _executing;
    double  _queueing;
    NSMutableArray * _ranges;
    NSMutableSet * _requestUUIDs;
    NSDate * _startDate;
}

@property unsigned int bytesDownloaded;
@property unsigned int bytesUploaded;
@property unsigned int connections;
@property unsigned int connectionsCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double duration;
@property double executing;
@property (readonly) unsigned int hash;
@property double queueing;
@property (nonatomic, retain) NSMutableArray *ranges;
@property (readonly) NSArray *rangesCopy;
@property (readonly) NSMutableSet *requestUUIDs;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)absoluteStart;
- (double)absoluteStop;
- (void)addRange:(id)arg1;
- (unsigned int)bytesDownloaded;
- (unsigned int)bytesUploaded;
- (int)compareExecutingStartTime:(id)arg1;
- (int)compareStartTime:(id)arg1;
- (unsigned int)connections;
- (unsigned int)connectionsCreated;
- (id)describeRanges;
- (id)description;
- (double)duration;
- (double)executing;
- (id)initWithDate:(id)arg1;
- (id)newRangeWithOperationState:(unsigned int)arg1 startDate:(id)arg2 duration:(double)arg3;
- (double)other;
- (double)queueing;
- (id)ranges;
- (void)rangesCompleted;
- (id)rangesCopy;
- (id)requestUUIDs;
- (void)setBytesDownloaded:(unsigned int)arg1;
- (void)setBytesUploaded:(unsigned int)arg1;
- (void)setConnections:(unsigned int)arg1;
- (void)setConnectionsCreated:(unsigned int)arg1;
- (void)setDuration:(double)arg1;
- (void)setExecuting:(double)arg1;
- (void)setQueueing:(double)arg1;
- (void)setRanges:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end