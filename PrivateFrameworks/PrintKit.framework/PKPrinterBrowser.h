/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@class NSFileHandle, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSMutableArray, <PKPrinterBrowserDelegate>;

@interface PKPrinterBrowser : NSObject  {
    <PKPrinterBrowserDelegate> *delegate;
    struct _DNSServiceRef_t { } *mainBrowserRef;
    struct _DNSServiceRef_t { } *ippBrowserRef;
    struct _DNSServiceRef_t { } *ippsBrowserRef;
    struct _DNSServiceRef_t { } *localippBrowserRef;
    struct _DNSServiceRef_t { } *localippsBrowserRef;
    NSMutableDictionary *printers;
    NSMutableDictionary *printersByUUID;
    NSFileHandle *handle;
    unsigned char originalCellFlag;
    unsigned char originalWifiFlag;
    NSObject<OS_dispatch_queue> *printersQueue;
    NSMutableArray *pendingList;
}

@property(retain) NSMutableDictionary * printers;
@property(retain) NSMutableDictionary * printersByUUID;
@property(retain) NSFileHandle * handle;
@property <PKPrinterBrowserDelegate> * delegate;
@property(readonly) NSObject<OS_dispatch_queue> * printersQueue;
@property(retain) NSMutableArray * pendingList;

+ (id)browserWithDelegate:(id)arg1;

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)queryCallback:(int)arg1 flags:(unsigned int)arg2 fullName:(const char *)arg3 rdlen:(unsigned short)arg4 rdata:(const void*)arg5;
- (void)browseLocalCallback:(unsigned int)arg1 interface:(unsigned int)arg2 name:(const char *)arg3 regType:(const char *)arg4 domain:(const char *)arg5;
- (void)browseCallback:(unsigned int)arg1 interface:(unsigned int)arg2 name:(const char *)arg3 regType:(const char *)arg4 domain:(const char *)arg5;
- (void)reissueTXTQuery:(id)arg1;
- (void)addQueryResult:(id)arg1 toPrinter:(id)arg2;
- (void)addLimboPrinter:(id)arg1 local:(BOOL)arg2;
- (id)printersQueue;
- (id)pendingList;
- (id)printersByUUID;
- (void)removePrinter:(id)arg1;
- (void)addBlockToPendingList:(id)arg1;
- (id)printers;
- (void)queryHardcodedPrinters;
- (void)setPrintersByUUID:(id)arg1;
- (void)setPrinters:(id)arg1;
- (void)setPendingList:(id)arg1;
- (void)setHandle:(id)arg1;
- (id)handle;

@end
