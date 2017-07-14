/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUComposedInstallationConstraintMonitor : NSObject <SUInstallationConstraintMonitor, SUInstallationConstraintMonitorDelegate> {
    NSObject<OS_dispatch_queue> * _queue;
    <SUInstallationConstraintMonitorDelegate> * _queue_delegate;
    NSSet * _queue_installationConstraintMonitors;
    unsigned int  _queue_representedConstraints;
}

@property (nonatomic, readonly, retain) NSSet *constraintMonitors;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUInstallationConstraintMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int representedConstraints;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int unsatisfiedConstraints;

- (void).cxx_destruct;
- (void)_queue_clearDelegate;
- (id)_queue_delegate;
- (void)_queue_invalidateChildConstraintMonitors;
- (void)_queue_noteInstallationConstraintMonitor:(id)arg1 constraintsDidChange:(unsigned int)arg2;
- (unsigned int)_queue_representedConstraints;
- (void)_queue_setDelegate:(id)arg1;
- (unsigned int)_queue_unsatisfiedConstraints;
- (id)constraintMonitors;
- (void)dealloc;
- (id)delegate;
- (id)initWithInternalQueue:(id)arg1 withInstallationConstraintMonitors:(id)arg2;
- (void)installationConstraintMonitor:(id)arg1 constraintsDidChange:(unsigned int)arg2;
- (BOOL)isSatisfied;
- (unsigned int)representedConstraints;
- (void)setDelegate:(id)arg1;
- (unsigned int)unsatisfiedConstraints;

@end
