/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class NSNumber, NSString, NSMutableDictionary;

@interface ACDClient : NSObject  {
    struct _xpc_connection_s { } *_connection;
    NSString *_bundleID;
    struct __CFBundle { } *_bundle;
    NSNumber *_pid;
    NSString *_localizedAppName;
    NSString *_name;
    NSMutableDictionary *_accessOptions;
}

@property(retain) NSString * bundleID;
@property(readonly) struct __CFBundle { }* bundle;
@property(readonly) NSString * localizedAppName;
@property(readonly) NSString * adamOrDisplayID;
@property(readonly) NSString * name;
@property(readonly) NSNumber * pid;
@property(readonly) struct _xpc_connection_s { }* connection;

+ (id)clientWithBundleID:(id)arg1;

- (id)name;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)dealloc;
- (id)pid;
- (id)localizedAppName;
- (id)adamOrDisplayID;
- (BOOL)hasEntitlement:(id)arg1;
- (id)initWithConnection:(struct _xpc_connection_s { }*)arg1;
- (struct _xpc_connection_s { }*)connection;
- (struct __CFBundle { }*)bundle;
- (void)setBundleID:(id)arg1;
- (id)bundleID;

@end
