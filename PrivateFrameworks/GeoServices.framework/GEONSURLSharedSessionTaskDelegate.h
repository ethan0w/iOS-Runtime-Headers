/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONSURLSharedSessionTaskDelegate : NSObject {
    <NSURLSessionDataDelegate> * _delegate;
    struct { 
        unsigned int delegateRespondsToDidFinishCollectingMetrics : 1; 
        unsigned int delegateRespondsToDataTaskDidReceiveResponse : 1; 
        unsigned int delegateRespondsToDataTaskDidReceiveData : 1; 
        unsigned int delegateRespondsToTaskDidCompleteWithError : 1; 
        unsigned int delegateRespondsToWillSendRequestForEstablishedConnection : 1; 
    }  _flags;
    NSOperationQueue * _queue;
}

@property (nonatomic, readonly) <NSURLSessionDataDelegate> *delegate;
@property (nonatomic, readonly) BOOL delegateRespondsToDataTaskDidReceiveData;
@property (nonatomic, readonly) BOOL delegateRespondsToDataTaskDidReceiveResponse;
@property (nonatomic, readonly) BOOL delegateRespondsToDidFinishCollectingMetrics;
@property (nonatomic, readonly) BOOL delegateRespondsToTaskDidCompleteWithError;
@property (nonatomic, readonly) BOOL delegateRespondsToWillSendRequestForEstablishedConnection;
@property (nonatomic, readonly) NSOperationQueue *queue;

+ (id)taskDelegate:(id)arg1 delegateQueue:(id)arg2;

- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (BOOL)delegateRespondsToDataTaskDidReceiveData;
- (BOOL)delegateRespondsToDataTaskDidReceiveResponse;
- (BOOL)delegateRespondsToDidFinishCollectingMetrics;
- (BOOL)delegateRespondsToTaskDidCompleteWithError;
- (BOOL)delegateRespondsToWillSendRequestForEstablishedConnection;
- (id)queue;

@end
