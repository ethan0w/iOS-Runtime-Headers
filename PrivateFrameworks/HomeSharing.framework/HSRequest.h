/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSRequest : NSObject {
    BOOL  _acceptsGzipEncoding;
    NSString * _action;
    NSDictionary * _arguments;
    NSData * _bodyData;
    BOOL  _concurrent;
    int  _method;
}

@property (nonatomic) BOOL acceptsGzipEncoding;
@property (nonatomic, readonly) NSString *action;
@property (nonatomic, copy) NSData *bodyData;
@property (getter=isConcurrent, nonatomic, readonly) BOOL concurrent;
@property (nonatomic) int method;
@property (nonatomic, readonly) double timeoutInterval;

+ (id)request;

- (void).cxx_destruct;
- (id)URLRequestForBaseURL:(id)arg1 sessionID:(unsigned int)arg2;
- (BOOL)acceptsGzipEncoding;
- (id)action;
- (id)bodyData;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)description;
- (id)initWithAction:(id)arg1;
- (BOOL)isConcurrent;
- (int)method;
- (id)requestURLForBaseURL:(id)arg1 sessionID:(unsigned int)arg2;
- (void)setAcceptsGzipEncoding:(BOOL)arg1;
- (void)setBodyData:(id)arg1;
- (void)setMethod:(int)arg1;
- (void)setValue:(id)arg1 forArgument:(id)arg2;
- (double)timeoutInterval;

@end
