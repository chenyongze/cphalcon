
extern zend_class_entry *phalcon_mvc_model_metadata_session_ce;

ZEPHIR_INIT_CLASS(Phalcon_Mvc_Model_MetaData_Session);

PHP_METHOD(Phalcon_Mvc_Model_MetaData_Session, __construct);
PHP_METHOD(Phalcon_Mvc_Model_MetaData_Session, read);
PHP_METHOD(Phalcon_Mvc_Model_MetaData_Session, write);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_session___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_session_read, 0, 0, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_session_write, 0, 0, 2)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_mvc_model_metadata_session_method_entry) {
	PHP_ME(Phalcon_Mvc_Model_MetaData_Session, __construct, arginfo_phalcon_mvc_model_metadata_session___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Phalcon_Mvc_Model_MetaData_Session, read, arginfo_phalcon_mvc_model_metadata_session_read, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Mvc_Model_MetaData_Session, write, arginfo_phalcon_mvc_model_metadata_session_write, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
