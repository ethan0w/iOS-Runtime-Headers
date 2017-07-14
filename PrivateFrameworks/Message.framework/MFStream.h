/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFStream : NSObject <NSStreamDelegate, NSURLSessionDelegate> {
    char * _buffer;
    unsigned int  _bytesRead;
    unsigned int  _bytesWritten;
    id /* block */  _callback;
    unsigned long  _capacity;
    NSCondition * _condition;
    BOOL  _dispatchedBytesAvailable;
    BOOL  _enableThroughputMonitoring;
    NSError * _error;
    unsigned long  _length;
    NSObject<OS_dispatch_queue> * _location;
    NSMutableDictionary * _properties;
    NSInputStream * _rStream;
    BOOL  _streamCanRead;
    BOOL  _streamCanWrite;
    NSOutputStream * _wStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isOpen;
@property (nonatomic, readonly) NSError *streamError;
@property (readonly) Class superclass;

+ (id)_networkDispatchQueue;
+ (id)networkThread;
+ (void)setNetworkThread:(id)arg1;

- (void)_closeAndReleaseStream:(id)arg1 logMessage:(id)arg2;
- (id)_copyPropertyForKey:(id)arg1;
- (void)_createPairWithSocketToHostName:(id)arg1 port:(int)arg2;
- (void)_readBytesFromStream;
- (void)close;
- (void)dealloc;
- (void)enableThroughputMonitoring:(BOOL)arg1;
- (id)initCallBack:(id /* block */)arg1 onDispatchQueue:(id)arg2;
- (BOOL)isOpen;
- (void)openToHostName:(id)arg1 port:(int)arg2;
- (id)propertyForKey:(id)arg1;
- (int)read:(char *)arg1 maxLength:(unsigned int)arg2;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;
- (id)streamError;
- (int)write:(const char *)arg1 maxLength:(unsigned int)arg2;

@end
