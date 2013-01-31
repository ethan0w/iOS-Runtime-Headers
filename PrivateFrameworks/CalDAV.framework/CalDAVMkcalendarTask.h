/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSSet, <CalDAVMkcalendarTaskDelegate><CoreDAVTaskDelegate>;

@interface CalDAVMkcalendarTask : CoreDAVTask  {
    NSSet *_setElements;
}

@property <CalDAVMkcalendarTaskDelegate><CoreDAVTaskDelegate> * delegate;
@property(retain) NSSet * setElements;


- (id)initWithURL:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)httpMethod;
- (id)requestBody;
- (id)initWithPropertiesToSet:(id)arg1 atURL:(id)arg2;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (void)setSupportForEvents:(BOOL)arg1 tasks:(BOOL)arg2;
- (id)setElements;
- (void)setSetElements:(id)arg1;

@end
